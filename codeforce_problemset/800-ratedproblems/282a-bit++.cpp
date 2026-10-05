#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=0,n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s=="++X"||s=="X++")x+=1;
        else if(s=="--X"||s=="X--")x-=1;
    }
    cout<<x;
    return 0;
}