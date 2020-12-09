/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-13 22:01
 * @file test.cpp
 * @description 
 */

#include<iostream>
#include<unordered_set>

#include "Solution.cpp"

using namespace std;

int main(){
    Solution *s = new Solution();
    unordered_set<string> wordDict = {"a","abc","b","cd"};
    string str = "abcd";
    cout<<s->wordBreak(str,wordDict)<<endl;
    return 0;
}
