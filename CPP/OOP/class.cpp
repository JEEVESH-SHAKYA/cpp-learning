#include<bits/stdc++.h>
using namespace std;
/*class just allows us to 
group our data to make it look clean other than that
there is nothing we can't do without class that we can do 
with class*/
class player{
public:
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