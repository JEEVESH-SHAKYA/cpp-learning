#include<bits/stdc++.h>
using namespace std;
void print(long long int a[],int n,int k,int i){
if(k!=0){
    cout<<"NO";
    return;
}
if(i>=n/2&&k==0){
    cout<<"YES";
    return;
}
if(a[i]!=a[n-i-1])k+=1;
print(a,n,k,i+1);
}
int main(){
int n;
cin>>n;
long long int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
print(a,n,0,0);
}