/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-12 18:45
 * @file test.cpp
 * @description 
 */

#include<iostream>
#include<vector>

#include "Solution.cpp"

using namespace std;

int main() {
    Solution *s = new Solution();
    vector<string> result;
    string digits = "#021";
    result = s->letterCombinations(digits);
    for(auto &s : result) {
        cout<<s<<endl;
    }
}
