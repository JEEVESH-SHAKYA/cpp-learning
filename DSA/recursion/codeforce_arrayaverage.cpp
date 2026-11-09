#include<bits/stdc++.h>
using namespace std;
void print(double a[],int n,double k,double i){
    if(n<0){
        cout<<setprecision(6)<<fixed<<i/k;
        return;
        }
    i+=a[n];
    print(a,n-1,k+1,i);
}
int main(){
   int n;
   cin>>n;
   double a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   } 
   print(a,n-1,0.000000,0.000000);
}