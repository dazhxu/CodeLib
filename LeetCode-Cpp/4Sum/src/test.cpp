/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-11 22:35
 * @file test.cpp
 * @description 
 */

#include<iostream>
#include<vector>
#include "Solution.cpp"

using namespace std;

int main() {
    Solution *s = new Solution();
    vector<int> nums={0,0,0,0};
    vector<vector<int>> result = s->fourSum(nums,0);
    cout<<"["<<endl;
    for(auto &item : result) {
        cout<<"  [";
        for(auto &num : item) {
            cout<<num<<",";
        }
        cout<<"],"<<endl;
    }
    cout<<"]"<<endl;
}

