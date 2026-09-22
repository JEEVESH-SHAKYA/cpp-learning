#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,k;
    cin >>a;
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
        hash[x[i]]+=1;
    }
    for(int i=0;i<a;i++){
        if(hash[k-x[i]]>0 && (k-x[i])!=x[i]){
            cout <<"YES";
            return 0;
        }
    }
    cout <<"NO";
    return 0;
}