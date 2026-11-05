#include<bits/stdc++.h>
using namespace std;
long long int print(long long int a[],int n){
    if(n<0)return 0;
    return(a[n]+print(a,n-1));
}
int main(){
int n;
cin>>n;
long long int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<< print(a,n-1);
}