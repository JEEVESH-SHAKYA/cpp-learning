#include<bits/stdc++.h>
using namespace std;
void print(int a[],int n,int k){
if(k==n)return;
print(a,n,k+1);
if(k==0)cout<<a[k];
else if(k%2==0)cout<<a[k]<<" ";
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    print(a,n,0);
}