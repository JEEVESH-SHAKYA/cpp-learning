#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    unordered_map<char,int> m;
    unordered_map<char,int> n;
    if(a.size()==b.size()){
        for(int i=0;i<a.size();i++)
        {
        m[a[i]]+=1;
        n[b[i]]+=1;
        }
        for(auto it:m){
            if(n[it.first]!=it.second){
                cout <<"NO";
                return 0;
            }
        }
        cout <<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}