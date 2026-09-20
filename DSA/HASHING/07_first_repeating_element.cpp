#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int mx=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>mx)mx=a[i];
    }
    int hash[mx+1]={0};
    for(int i=0;i<n;i++){
        hash[a[i]]+=1;
    }
    for(int i=0;i<n;i++){
        if(hash[a[i]]>1){
            cout << a[i];
            return 0;
        }
    }
    return 0;
}