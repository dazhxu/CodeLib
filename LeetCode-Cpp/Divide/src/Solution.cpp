/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-18 19:16
 * @file Solution.cpp
 * @description 
 */

#include<iostream>

using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        unsigned int divd, divs;
        divd = (dividend<0)?-dividend:dividend;
        divs = (divisor<0)?-divisor:divisor;

        unsigned int res = 0;
        while(divd>=divs) {
            long long a = divs;
            int i;
            for(i=1;a<=divd;i++)
                a <<= 1;
            res += (1<<(i-2));
            divd -= (divs<<(i-2));
        }
        if((dividend>0)^(divisor>0)) {
            return -res;
        }
        if(res>INT_MAX)
            return INT_MAX;
        return res;
    }
};

