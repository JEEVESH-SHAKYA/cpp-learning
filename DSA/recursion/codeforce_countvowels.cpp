#include<bits/stdc++.h>
using namespace std;
int print(string a,int i,int k){
if(i==a.size())return 0;
char x=tolower(a[i]);
if(x=='a'||x=='i'||x=='e'||x=='o'||x=='u')k+=1;
return (k+print(a,i+1,0));
}
int main(){
    string s;
    getline(cin,s);
    cout<<print(s,0,0);
}