#include<bits/stdc++.h>
using namespace std;
void print(int n,string &s,int &k,int i){
if(n==2){
    s="1";
    return;
}

print(n-1,s,k+=1,i);
s=s+" "+to_string(n-1)+" "+s;
if(k==i&&k==n)cout<<s<<" "<<n<<" "<<s;


}
int main(){
    int n,k=2;
    string s="";
    cin>>n;
    if(n==1)cout<<1;
    else if(n==2)cout<<"1 2 1";
    else print(n,s,k,n);
}