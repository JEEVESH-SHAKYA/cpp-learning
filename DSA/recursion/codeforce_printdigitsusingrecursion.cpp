#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==0)return;
    print(n/10);
    cout<<n%10;
    if(n!=0)cout<<" ";
}
int main(){
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==0)cout<<0;
        else print(n);
        cout<<'\n';
    }
    
}