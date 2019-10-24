package com.xyz;

public class Solution {
    public String longestPalindrome(String s) {
        if(s==null || s.length() == 0)
            return "";
        int start = 0, end = 0;
        int maxLength = 0;
        boolean[][] f = new boolean[s.length()][s.length()];
        for(int j=0;j<s.length();j++){
            f[j][j] = true;
            for(int i=0;i<j;i++) {
                if(s.charAt(i) == s.charAt(j)) {
                    f[i][j] = (j==i+1 || f[i+1][j-1]);
                    if(f[i][j] && maxLength < j-i+1) {
                        maxLength = j-i+1;
                        start = i;
                        end = j;
                    }
                } else {
                    f[i][j] = false;
                }
            }
        }
        return s.substring(start, end+1);
    }
}
