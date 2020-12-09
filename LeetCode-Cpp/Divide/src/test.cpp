/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-18 19:27
 * @file test.cpp
 * @description 
 */
#include<iostream>
#include "Solution.cpp"

using namespace std;

int main() {
    Solution *s = new Solution();
    cout<<s->divide(-2147483648,-1)<<endl;
    delete s;
    return 0;
}
