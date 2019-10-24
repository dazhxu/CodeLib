package com.xyz;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        List<List<Integer>> result = new ArrayList<>();

        Arrays.sort(nums);

        for(int i=0;i<nums.length-3;i++) {
            if(i>0&&nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.length-2;j++) {
                if(j>i+1&&nums[j]==nums[j-1]) continue;
                int l = j+1, h = nums.length - 1;
                while(l<h) {
                    int temp = nums[i] + nums[j] + nums[l] + nums[h] - target;
                    if(temp == 0) {
                        List<Integer> curList = new ArrayList<>();
                        curList.add(nums[i]);
                        curList.add(nums[j]);
                        curList.add(nums[l]);
                        curList.add(nums[h]);
                        result.add(curList);
                        l++;
                        while(l<h&&nums[l]==nums[l-1]) l++;
                        h--;
                        while(l<h&&nums[h]==nums[h+1]) h--;
                    }
                    else if(temp < 0) {
                        l++;
                    } else {
                        h--;
                    }
                }
            }
        }

        return result;
    }

    public static void main(String[] args) {
        Solution s = new Solution();
        int[] nums = {-3,-2,-1,0,0,1,2,3};
        int target = 0;
        List<List<Integer>> ret = s.fourSum(nums, target);
        for(List<Integer> itemList:ret) {
            System.out.println(itemList);
        }
    }
}
