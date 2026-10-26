#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    string v;
    while(x!=0){
        if(x%2==1)v+='1';
        else v+='0';
        x=x/2;
    }
    reverse(v.begin(),v.end());
    cout<<v;
}