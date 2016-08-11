/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-09 16:27
 * @file Solution.cpp
 * @description 
 */

#include<iostream>

using namespace std;

class Solution {
public:
    void insert_sort(int *a, int size) {
        for(int i=0;i<size;i++) {
            int temp = a[i];
            int j=i-1;
            while(j>=0&&temp<a[j]) {
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = temp;

        }
    }
};

