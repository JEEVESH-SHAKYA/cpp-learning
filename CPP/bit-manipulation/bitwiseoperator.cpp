#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,a=0,o=0,x=0;
    cin>>n;
    cin>>k;
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if((i&j)>a&&(i&j)<k)a=i&j;
            if((i|j)>o&&(i|j)<k)o=i|j;
            if((i^j)>x&&(i^j)<k)x=i^j;
        }
    }
    cout<<a<<'\n';
    cout<<o<<'\n';
    cout<<x<<'\n';
}