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
    string testString = "VII";
    cout<<s->romanToInt(testString)<<endl;
    return 0;
}

