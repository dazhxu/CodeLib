package im.xyz;

import java.util.ArrayList;
import java.util.List;

public class Solution {
    public List<String> summaryRanges(int[] nums) {
        List<String> ret = new ArrayList<>();

        int start=0, end=0;

        while (end < nums.length) {
            if (end+1<nums.length && nums[end]+1==nums[end+1]) {
                ++end;
                continue;
            }
            if (start == end) {
                ret.add(Integer.toString(nums[start]));
            } else {
                ret.add(nums[start]+"->"+nums[end]);
            }
            start = end + 1;
            ++end;
        }
        return ret;
    }

    public static void main(String[] args) {
        Solution s = new Solution();
        int[] nums = {0,2,5,9};
        List<String> ret = s.summaryRanges(nums);
        for (int i=0;i<ret.size();++i) {
            System.out.println(ret.get(i));
        }
    }
}
