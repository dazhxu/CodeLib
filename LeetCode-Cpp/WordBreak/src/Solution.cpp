/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-13 21:43
 * @file Solution.cpp
 * @description 
 */

#include<iostream>
#include<unordered_set>

using namespace std;

class Solution {
public:
    bool wordBreak(string s, unordered_set<string>& wordDict) {
        int len = s.size();
        bool match[len+1] = {false};
        match[0] = true;
        for(int i=1;i<=len;i++) {
            for(int j=0;j<i;j++) {
                if(match[j]&&wordDict.find(s.substr(j,i-j))!=wordDict.end()) {
                    match[i] = true;
                    break;
                }
            }
        }
        return match[len];
    }
};

