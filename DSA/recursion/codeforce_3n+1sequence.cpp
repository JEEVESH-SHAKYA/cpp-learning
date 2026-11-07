#include<bits/stdc++.h>
using namespace std;
void print(int n,int k){
if(n==1){
    cout<<k;
    return;
}
if(n%2!=0)print(3*n+1,k+1);
else print(n/2,k+1);
}
int main(){
int n;
cin>>n;
if(n==1)cout<<1;
else print(n,1);
}