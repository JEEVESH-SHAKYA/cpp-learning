#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=0;
    int * p=&x;
    cout<<*p<<endl;
    cout<<p<<endl;
    int a[]={1,2,3,4,5,6};
    int *pt=a;//array does not require & it automatically gives value of adrress of first element
    for(int i=0;i<6;i++){
        cout<<*pt<<endl;
        pt=pt+1;//it basically adds to index
    }
    return 0;
}