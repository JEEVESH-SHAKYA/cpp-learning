#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> m;
    int n;
    cin >>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin >>ar[i];
    }
    for(int i=0;i<n;i++){
        //pre computing
        m[ar[i]]++;
    }
    /*iterating in the map
    for(auto it : m){
        cout << it.first << " -> " << it.second <<endl; 
    }
    */
    int k,x;
    cin >>k;
    for(int i=0;i<k;i++){
        cin >>x;
        //fetching the value
        cout <<m[x] <<endl;
    }
    return 0;
}