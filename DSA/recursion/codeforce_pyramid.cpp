#include<bits/stdc++.h>
using namespace std;
void print(int a,int i){
if(a==0)return;
for(int j=a;j>1;j--){
    cout<<" ";
}
for(int j=i;j>0;j--){
    cout<<'*';
}
cout<<'\n';
print(a-1,i+2);
}
int main(){
    int a;
    cin>>a;
    print(a,1);
}