/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-09 16:37
 * @file test.cpp
 * @description 
 */

#include<iostream>
#include "Solution.cpp"

using namespace std;

int main() {
    Solution *s = new Solution();
    int a[] = {4,2,6,1,9,3,2};
    s->insert_sort(a,7);
    for(int i=0;i<7;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    delete s;
    return 0;
}

