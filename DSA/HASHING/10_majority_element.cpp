#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >>a;
    int x[a];
    for(int i=0;i<a;i++){
    cin >>x[i];
    }
    int mx=x[0];
    for(int i=0;i<a;i++){
        if(x[i]>mx)mx=x[i];
    }
    int hash[mx+1]={0};
    for(int i=0;i<a;i++){
        hash[x[i]]+=1;
    }
    for(int i=0;i<a;i++){
        if(hash[x[i]]>(a/2)){
            cout << x[i];
            hash[x[i]]=0;
        }
    }

    return 0;
}