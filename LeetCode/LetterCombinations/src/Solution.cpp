/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-12 18:21
 * @file Solution.cpp
 * @description 
 */

#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char, string> letterMap;
        letterMap['0'] = " ";
        letterMap['1'] = "";
        letterMap['2'] = "abc";
        letterMap['3'] = "def";
        letterMap['4'] = "ghi";
        letterMap['5'] = "jkl";
        letterMap['6'] = "mno";
        letterMap['7'] = "pqrs";
        letterMap['8'] = "tuv";
        letterMap['9'] = "wxyz";
        letterMap['#'] = "+";
        
        vector<string> res;
        string item = "";
        genString(letterMap,digits,0,item,res);
        
        return res;
    }

    void genString(map<char, string> &letterMap,string &digits, int idx, string &item,vector<string> &res) {
        if(idx == digits.size()) {
            if(!item.empty())
                res.push_back(item);
            return ;
        }
        string cur = letterMap[digits[idx]];
        if(cur.empty()) { 
            genString(letterMap,digits,idx+1,item,res);
        }
        for(int i=0;i<cur.size();i++) {
            string tmp = item;
            tmp.push_back(cur[i]);
            genString(letterMap,digits,idx+1,tmp,res);
        }
    }
};

