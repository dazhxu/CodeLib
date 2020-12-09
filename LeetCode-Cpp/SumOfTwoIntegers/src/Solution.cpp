/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-08 22:09
 * @file Solution.cpp
 * @description 
 */

#include<iostream>

using namespace std;

class Solution {
    public:
        int getSum(int a, int b) {
            if(b == 0) return a;
            int sum = a^b;
            int carry = (a&b)<<1;
            return getSum(sum,carry);
        }
};
