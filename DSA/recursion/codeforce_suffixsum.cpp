#include<bits/stdc++.h>
using namespace std;
//here const is added to prevent modification of vecor and & to pass by reference to 
//prevent memory limit exceed
long long print(const vector<long long>& a,int n,int m,int k){
    if(k==m)return 0;
    return(a[n]+print(a,n-1,m,k+1));
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    if(m>n)m=n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<print(a,n-1,m,0);
}