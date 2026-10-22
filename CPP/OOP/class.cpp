#include<bits/stdc++.h>
using namespace std;
/*class just allows us to 
group our data to make it look clean other than that
there is nothing we can't do without class that we can do 
with class*/
/*the major difference in class and struct is that in struct everything is defaulted as public
while in class everything is defaulted as private this is the only difference*/
class player{
public://public means it can be accessed by other fxn outside this class
//while private would not
    string x;
    int a;
    void print(){
        cout<<x<<'\n';
        cout<<a<<'\n';
    }

};
int main(){
player x;
x.x="mick";
x.a=24;
x.print();
}