/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-13 19:30
 * @file test.cpp
 * @description 
 */

#include<iostream>
#include<vector>

#include "Solution.cpp"

using namespace std;

int main() {
    Solution *s = new Solution();
    vector<int> price = {0,1,5,8,9,10,17,17,20,24,30};
    //cout<<s->memoizedCutRod(price, 20)<<endl;
    cout<<s->bottomUpCutRod(price, 20)<<endl;
    return 0;
}

