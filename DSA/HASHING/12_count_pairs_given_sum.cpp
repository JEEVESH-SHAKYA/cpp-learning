#include<bits/stdc++.h>
using namespace  std;
int main(){
    int a,k,o=0;
    cin >> a;
    int x[a];
    for(int i=0;i<a;i++){
        cin >>x[i];
    }
    cin >>k;
    int mx=x[0];
    for(int i=0;i<a;i++){
        if(x[i]>mx)mx=x[i];
    }
    int hash[mx+1]={0};
    for(int i=0;i<a;i++){
        if(hash[k-x[i]]>0)o+=1;
        hash[x[i]]+=1;
    }
    cout <<o;
    return 0;
}