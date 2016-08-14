/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-13 19:27
 * @file Solution.cpp
 * @description 
 */

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int memoizedCutRod(vector<int> &price, int n) {
        int r[n+1] = {0};
        return memoizedCutRodAux(price,n,r);
    }

    int memoizedCutRodAux(vector<int> &price, int n, int *reward) {
        if(reward[n]>0)
            return reward[n];
        int q = 0;
        if(n==0)
            q=0;
        else {
            int len = price.size();
            for(int i=1;i<=n&&i<len;i++) {
                int tmp = price[i] + memoizedCutRodAux(price,n-i,reward);
                q = (q>tmp)?q:tmp;
            }
        }
        reward[n] = q;
        return q;
    }


    int bottomUpCutRod(vector<int> &price, int n) {
        int r[n+1] = {0};
        int len = price.size();
        for(int i=1;i<=n;i++) {
            int q=0;
            for(int j=1;j<=i&&j<len;j++) {
                int tmp = price[j]+r[i-j];
                q = (q>tmp)?q:tmp;
            }
            r[i] = q;
        }
        return r[n];
    }
};

