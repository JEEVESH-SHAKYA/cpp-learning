#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    a.push_back(80);
    for(auto it:a){
        cout<<it<<endl;
    }
    cout<<"a.size= "<<a.size();
}