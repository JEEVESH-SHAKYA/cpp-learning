#include<bits/stdc++.h>
using namespace std;
int main(){
int  a,b;
cin >>a;
int x[a];
for(int i=0;i<a;i++){
    cin >>x[i];
}
cin >>b;
int y[b];
for(int i=0;i<b;i++){
    cin >>y[i];
}
int mx_1=x[0],mx_2=y[0];
for(int i=0;i<a;i++){
    if(x[i]>mx_1)mx_1=x[i];
}
for(int i=0;i<b;i++){
    if(y[i]>mx_2)mx_2=y[i];
}
int hash_1[mx_1+1]={0},hash_2[mx_2+1]={0};
for(int i=0;i<a;i++){
    hash_1[x[i]]+=1;
}
for(int i=0;i<b;i++){
    hash_2[y[i]]+=1;
}
for(int i=0;i<=(mx_1>mx_2 ? mx_2 : mx_1 );i++){
    if(hash_1[i]>0 && hash_2[i]>0)cout <<i;
}
return 0;
}