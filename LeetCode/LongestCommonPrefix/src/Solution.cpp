/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-09 14:36
 * @file Solution.cpp
 * @description 
 */

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) 
            return "";
        else if(strs.size() == 1) 
            return strs[0];

        int minLength = strs[0].size();
        for(vector<string>::iterator iter=strs.begin();iter != strs.end(); ++iter) {
            if(iter->size() < minLength) {
                minLength = (int)iter->size();
            }
        }
    
        string prefix;
        for(int i=0;i<minLength;++i) {
            prefix.push_back(strs[0][i]);
            for(vector<string>::iterator iter=strs.begin();iter!=strs.end(); ++iter) {
                if(prefix.back() != (*iter)[i]) {
                    prefix.pop_back();
                    return prefix;
                }
            }
        }
        return prefix;
    }
};

