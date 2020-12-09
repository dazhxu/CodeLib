/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-17 10:58
 * @file test.cpp
 * @description 
 */

#include<iostream>
#include<vector>

#include "Solution.cpp"

using namespace std;

int main() {
    Solution *s = new Solution();
    vector<string> res;
    int n = 3;
    res = s->generateParenthesis(n);
    for(auto &str:res) {
        cout<<str<<endl;
    }
    return 0;
}

