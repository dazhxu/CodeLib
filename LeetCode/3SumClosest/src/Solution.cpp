/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-12 11:41
 * @file Solution.cpp
 * @description 
 */

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int> &nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        int closest = nums[0] + nums[1] + nums[2] - target;

        for(int i=0;i<n-2;i++) {
            if(i>0&&nums[i]==nums[i-1]) continue;
            
            int left = i+1;
            int right = n-1;
            while(left<right) {
                int cur_diff = nums[i] + nums[left] + nums[right] - target;
                if(cur_diff == 0) 
                    return target;
                else if(cur_diff < 0)
                    left++;
                else
                    right--;
                closest = (abs(closest) > abs(cur_diff))?cur_diff:closest;
            }
        }
        return closest+target;

    }
};

