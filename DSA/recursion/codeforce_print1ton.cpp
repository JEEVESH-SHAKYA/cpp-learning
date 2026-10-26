#include<bits/stdc++.h>
using namespace std;
void print(int n,int x){
if(x==n+1)return ;
cout<<x<<'\n';
print(n,x+=1);
}
int main(){
 int n;
 cin>>n;
 print(n,1);
    return 0;
}