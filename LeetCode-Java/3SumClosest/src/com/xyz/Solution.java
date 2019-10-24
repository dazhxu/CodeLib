package com.xyz;

import java.util.Arrays;

public class Solution {
    public int treeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);

        int closest = nums[0] + nums[1] + nums[2] - target;
        for(int i=0;i<nums.length-2;i++) {
            if(i>0&&nums[i]==nums[i-1]) continue;

            int begin = i+1, end = nums.length-1;

            while(begin < end) {
                int temp = nums[i] + nums[begin] + nums[end] - target;
                if (temp == 0) {
                    return target;
                } else if (temp < 0) {
                    begin++;
                } else {
                    end--;
                }
                closest = (Math.abs(closest) < Math.abs(temp)) ? closest : temp;
            }
        }
        return closest + target;
    }
}
