/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-09 13:24
 * @file Solution.cpp
 * @description 
 */

#include<iostream>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for(unsigned int i=0;i<s.length();i++) {
            switch(s[i]) {
                case 'M':
                    sum += 1000;
                    break;
                case 'C':
                    if((i+1)<s.length()&&s[i+1]=='M'){
                        sum += 900;
                        i++;
                    } else if((i+1)<s.length()&&s[i+1]=='D') {
                        sum += 400;
                        i++;
                    } else {
                        sum += 100;
                    }
                    break;
                case 'D':
                    sum += 500;
                    break;
                case 'X':
                    if((i+1)<s.length()&&s[i+1]=='C'){
                        sum += 90;
                        i++;
                    } else if((i+1)<s.length()&&s[i+1]=='L') {
                        sum += 40;
                        i++;
                    } else {
                        sum += 10;
                    }
                    break;
                case 'L':
                    sum += 50;
                    break;
                case 'I':
                    if((i+1)<s.length()&&s[i+1]=='X'){
                        sum += 9;
                        i++;
                    } else if((i+1)<s.length()&&s[i+1]=='V') {
                        sum += 4;
                        i++;
                    } else {
                        sum += 1;
                    }
                    break;
                case 'V':
                    sum += 5;
                    break;
                default:
                    ;
            }
        }
        return sum;
    }
};

