/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-12 12:45
 * @file test.cpp
 * @description 
 */

#include<iostream>
#include<vector>

#include "Solution.cpp"

using namespace std;

int main() {
    Solution *s = new Solution();
    vector<int> vec = {-1,2,1,-4};
    cout<<s->threeSumClosest(vec,1)<<endl;
}
