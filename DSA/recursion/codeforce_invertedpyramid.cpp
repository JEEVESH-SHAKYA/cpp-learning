#include<bits/stdc++.h>
using namespace std;
void print(int a,int i){
if(i<=0)return;
for(int j=((i+1)/2);j<a;j++){
    cout<<" ";
}
for(int j=0;j<i;j++){
    cout<<'*';
}
cout<<'\n';
print(a,i-2);
}
int main(){
    int a;
    cin>>a;
    print(a,2*a-1);
}