/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-11 22:20
 * @file Solution.cpp
 * @description 
 */

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums,int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> result;
        
        for(int i=0;i<n-3;i++) {
            if(i>0&&nums[i]==nums[i-1]) continue;

            for(int j=i+1;j<n-2;j++) {
                if(j>i+1&&nums[j]==nums[j-1]) continue;
                int target0 = target - nums[i] - nums[j];
                twoSum(nums,i,j+1,target0,result);
            }
        }
        
        return result;
    }

    void twoSum(vector<int> &nums, int first, int start, int target, vector<vector<int>>& res) {
        int head = start, tail = nums.size()-1;
        while(head < tail) {
            int tmp = nums[head] + nums[tail];
            if(tmp<target)
                head++;
            else if(tmp>target)
                tail--;
            else {
                res.push_back(vector<int>{nums[first],nums[start-1],nums[head],nums[tail]});

                int k=head+1;
                while(k<tail&&nums[k]==nums[head]) 
                    k++;
                head = k;

                k=tail-1;
                while(k>head&&nums[k]==nums[tail])
                    k--;
                tail = k;
            }
        }
    }
};

