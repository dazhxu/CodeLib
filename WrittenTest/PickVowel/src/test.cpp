/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-17 21:18
 * @file test.cpp
 * @description 
 */

#include<iostream>

using namespace std;

int main() {
    string s;
    getline(cin,s);
    int n = s.size();
    string res;
    int isHave[5] = {0};
    char vowel[5] = {'a','e','i','o','u'};
    for(auto &c : s) {
        char tmp = tolower(c);
        for(int i=0;i<5;i++) {
            if(tmp == vowel[i]){
                isHave[i] = 1;
                res.push_back(c);
            }
        }
    }
    int type = 0;
    for(int i=0;i<5;i++)
        if(isHave[i]==1)
            type++;
    cout<<type<<' '<<res.size()<<' '<<(n-res.size())<<endl;
    cout<<res<<endl;

    return 0;
}

