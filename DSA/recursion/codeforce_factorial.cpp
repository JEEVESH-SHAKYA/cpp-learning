#include<bits/stdc++.h>
using namespace std;
long long int print(int a){
if(a==1)return 1;
return(a*print(a-1));
}
int main(){
    int a;
    cin>>a;
    cout<<print(a);
}