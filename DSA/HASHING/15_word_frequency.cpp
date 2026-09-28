#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,word="";
    getline(cin,s);
    unordered_map<string,int> m;
    /*while(cin>>s){
        m[s]+=1;
    }
    */
   for(int i=0;i<s.size();i++){
    if(s[i]==' '){
        m[word]+=1;
        word="";
        continue;
    }
    word+=s[i];
   }
    for(auto it:m){
        cout <<it.first <<" -> " <<it.second <<endl;
    }
    return 0;
}