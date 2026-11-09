#include<bits/stdc++.h>
using namespace std;
long long int print(int n,int r){
    if(r==0)return 1;
    return((n*print(n-1,r-1))/r);

}
int main(){
  int n,r;
  cin>>n>>r;
cout<<print(n,r);
}