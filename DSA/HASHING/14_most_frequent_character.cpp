#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >>s;
    unordered_map<char,int> m;
    for(int i=0;i<s.size();i++){
        m[s[i]]+=1;
    }
    char h=s[0];
    for(int i=0;i<s.size();i++){
        if(m[s[i]]>m[h])h=s[i];
    }
    cout << h;
    return 0;
}