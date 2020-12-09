/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-17 10:42
 * @file Solution.cpp
 * @description 
 */

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string tmp="";
        genParenthsisAux(res,n,-1,0,tmp);
        return res;
    }

    void genParenthsisAux(vector<string> &res, int n, int top, int size, string &cur) {
        if(size == n) {
            while(top>-1) {
                cur.push_back(')');
                top--;
            }
            res.push_back(cur);
            return;
        }
        
        string cur1 = cur;
        cur1.push_back('(');
        genParenthsisAux(res,n,top+1,size+1,cur1);
        if(top>-1) {
            string cur2 = cur;
            cur2.push_back(')');
            genParenthsisAux(res,n,top-1,size,cur2);
        }
    }
};

