#include<bits/stdc++.h>
using namespace std;
void print(long long int n,int k){
if(n<2){
    cout<<k;
    return;
}
if(n/2>=1)print(n/2,k+1);
}
int main(){
    long long int n;
    cin>>n;
    print(n,0);

}