/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-09 13:40
 * @file test.cpp
 * @description 
 */

#include<iostream>
#include "Solution.cpp"

using namespace std;

int main() {
    Solution *s = new Solution();
    vector<string> strs;
    strs.push_back("HelloWorld");
    strs.push_back("HelloC++");
    strs.push_back("Hello");
    cout<<s->longestCommonPrefix(strs)<<endl;
    return 0;
}

