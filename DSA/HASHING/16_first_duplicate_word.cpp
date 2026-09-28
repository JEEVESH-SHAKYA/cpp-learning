#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,word;
    getline(cin,s);
    map<string,int> m;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            m[word]+=1;
            word="";
            continue;
        }
        word+=s[i];
    }
    m[word]+=1;
    for(auto it:m){
        if(it.second>1){
            cout << it.first;
            return 0;
        }
    }
    cout <<"NO SUCH WORDS";
    return 0;
}