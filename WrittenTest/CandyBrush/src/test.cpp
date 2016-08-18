/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-17 21:45
 * @file test.cpp
 * @description 
 */

#include<iostream>

using namespace std;

void canSwap(char *candy, int i, int j, int k, bool& flag, int& min);
bool haveSame(char *candy, int i, int j, int k, char& diff);

int main() {
    char candy[25];
    cin>>candy;
    bool flag = false;
    int min= 25;
    for(int i=0;i<23;i++) {
        if((i/5)==((i+2)/5)) {
            canSwap(candy,i,i+1,i+2,flag,min);
        }
        if((i+10)<25) {
            canSwap(candy,i,i+5,i+10,flag,min);
        }
    }
    if(flag) {
        cout<<"YES "<<min<<endl;
    } else
        cout<<"NO"<<endl;
    return 0;
}

void canSwap(char *candy, int i, int j, int k, bool& flag, int& min) {
    char diff;
    if(!haveSame(candy,i,j,k,diff)){
        return ;
    }

    for(int it = 0;it<25;it++) {
        if(it != i && it != j && it != k && candy[it] == diff) {
            flag = true;
            if(it<min)
                min = it;
            return ;
        }
    }
}


bool haveSame(char *candy, int i, int j, int k, char& diff){
    if(candy[i] == candy[j]) {
        diff = candy[i];
        return true;
    }

    if(candy[i] == candy[k]) {
        diff = candy[i];
        return true;
    }

    if(candy[j] == candy[k]) {
        diff = candy[j];
        return true;
    }
    return false;
}
