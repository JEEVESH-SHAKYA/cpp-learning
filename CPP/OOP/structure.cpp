#include<bits/stdc++.h>
using namespace std;
//struct is like creating our own datatype
//A structure is a collection of variables of different data types
// and member functions under a single name.
struct student{
    string name;
    double gpa;
    bool enrolled;
};//<-----this semicolon is important!!!
void print(student x);
int main(){
    student x;
    x.name="mick";
    x.gpa=3.7;
    x.enrolled =true;
    print(x);
}
void print(student student){//here struct is passed by value ie
    cout<<student.name<<'\n';//student variable is copy of x
    cout<<student.gpa<<'\n';//thus these both have different address
    cout<<student.enrolled<<'\n';//to pass by reference just add '&' before student variable
}