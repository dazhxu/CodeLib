package im.xyz;

import java.util.Arrays;

public class Solution {
    public String function1(String time) {
        if (time.length() != 5) return null;
        StringBuilder strBuilder = new StringBuilder();
        char ans0 = time.charAt(0);
        char ans1 = time.charAt(1);
        if (ans0 == '?' || ans0 == '2') {
            if (ans1 == '?') {
                strBuilder.append("23");
            } else if (ans1 <= '3') {
                strBuilder.append("2");
                strBuilder.append(ans1);
            } else {
                strBuilder.append("1");
                strBuilder.append(ans1);
            }
        } else {
            if (ans1 == '?') {
                strBuilder.append(ans0);
                strBuilder.append("9");
            } else {
                strBuilder.append(ans0);
                strBuilder.append(ans1);
            }
        }

        strBuilder.append(":");

        char ans2 = time.charAt(3);
        char ans3 = time.charAt(4);
        if (ans2 == '?') {
            strBuilder.append("5");
        } else {
            strBuilder.append(ans2);
        }

        if (ans3 == '?') {
            strBuilder.append("9");
        } else {
            strBuilder.append(ans3);
        }

        return strBuilder.toString();
    }

    public Integer[] func2 (Integer[] N, int K) {
        int len = N.length;
        if (len<K) return null;
        Integer[] res = new Integer[K];
        for (int i=0; i<K; ++i)
            res[i] = N[i];
        for (int i=1; i<len-K+1; ++i) {
            boolean flag = false;
            for (int j=0; j<K; ++j) {
                if (!flag && res[j] > N[i+j]) break;
                if (res[j] < N[i+j]) {
                    flag = true;
                }
                if (flag) res[j] = N[i+j];
            }
        }
        return res;
    }

    public static void main(String[] args) {
        Solution s = new Solution();

        Integer[] N = {1,4,3,2,5};
        System.out.println(Arrays.toString(s.func2(N, 4)));

        //System.out.println(s.function1("??:??"));

    }
}
