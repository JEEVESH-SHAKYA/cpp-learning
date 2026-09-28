#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >>s;
    unordered_map<char,int> m;
    for(int i=0;i<s.size();i++){
        m[s[i]]+=1;
    }
    for(int i=0;i<s.size();i++){
        if(m[s[i]]==1){
            cout <<s[i];
            return 0;
        }
    }
    cout << "NO SUCH CHARACTER FOUND";
    return 0;
}