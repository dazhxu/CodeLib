/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-08 21:33
 * @file Solution.cpp
 * @description 
 */

#include<iostream>

using namespace std;

class Solution {
    public:
        string reverseString(string s) {
            int length = s.length();
            int low = 0, high = length - 1;
            while(low < high) {
                char temp = s[low];
                s[low++] = s[high];
                s[high--] = temp;
            }
            return s;
        }
};
