/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-08 21:40
 * @file test.cpp
 * @description 
 */

#include<iostream>
#include "Solution.cpp"

using namespace std;

int main() {
    Solution *s = new Solution();
    string testString = "Hello";
    cout<<s->reverseString(testString)<<endl;
    return 0;
}

