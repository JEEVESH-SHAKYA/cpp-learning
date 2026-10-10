#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    a.push_back(0);
    sort(a.begin(),a.end(),greater<int>());//sorts a in descending order because of greater<int>()
    a.pop_back();//removes last element
    //a.empty()--checks if a is empty or not bool values
    //a.front()--access the first elemnt of vector
    //a.back ()--access the last element
    //a.at(i)--means access an element at index i
    //a.clear()--clears a to empty
    //a.insert(it,x)inserts an element x before iterator it
    //a.erase(it)erases the element at index it
    for(auto it:a){
        cout<<it<<endl;
    }
    //cout<<*min(max)_element(a.begin(),a.end());
    //count(a.begin(),a.end(),x)count number of occurance of x in vector
    //find(a.begin(), a.end(), x);
    cout<<"a.size= "<<a.size();
}