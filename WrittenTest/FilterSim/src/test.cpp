/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-17 21:56
 * @file test.cpp
 * @description 
 */

#include<iostream>

#define V_NUM 10
#define G_NUM 5

using namespace std;

int main() {
    int voltage[V_NUM];
    for(int i=0;i<V_NUM;i++) {
        cin>>voltage[i];
    }
    int group_num = 0;
    int avg1, avg2;
    int j=0;
    int sum = 0;
    for(int i=0;i<V_NUM;i++) {
        if(voltage[i]>=3300&&voltage[i]<=4200) {
            sum += voltage[i];
            j++;
        }

        if(j==G_NUM){
            if(group_num==0){
                avg1 = sum/G_NUM;
            } else {
                avg2 = sum/G_NUM;
            }
            j = 0;
            sum = 0;
            group_num++;
        }
    }

    cout<<group_num;
    if(group_num>0) {
        cout<<" "<<avg1;
        if(group_num==2)
            cout<<" "<<avg2<<endl;
    }
    return 0;
}

