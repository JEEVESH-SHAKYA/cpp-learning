#include<bits/stdc++.h>
using namespace std;
//example to understand
// difference in private and public varibales in classes
class test
{
    private:
    int a,b,c;
    public:
    int d,e;
    void name(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
        cout<<a;
        cout<<b;
        cout<<c;
        cout<<d;
        cout<<e;
    };
};
int main(){
test tenth;
int p=1,q=2,r=3;
tenth.d=4;
tenth.e=5;
//tenth.a=6  -->this will give error because a is private variable so it can 
//not be changed outside the class;
tenth.name(p,q,r);

}