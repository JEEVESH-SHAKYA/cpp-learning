#include<bits/stdc++.h>
using namespace std;
struct record{
string name;
int roll;
int marks[3];
float average(int a,int b,int c){
return((a+b+c)/3.00);
}
};
int main(){
int n;
cout<<"Enter number of students: ";
cin>>n;
vector<record> student(n);
for(int i=0;i<n;i++){
    cout<<"Student "<<i+1<<":"<<'\n';
    cout<<"Name: ";
    cin>>student[i].name;
    cout<<"Roll: ";
    cin>>student[i].roll;
    cout<<"Marks: ";
    cin>>student[i].marks[0]>>student[i].marks[1]>>student[i].marks[2];
}
record search;
cout<<"Search roll number: ";
cin>>search.roll;
cout<<"===== STUDENT RECORDS ====="<<'\n';
float mx=0,avg=0;
int q,r;
for(int i=0;i<n;i++){
    cout<<student[i].name<<" | Roll: "<<student[i].roll<<'\n';
    cout<<"Total: "<<student[i].marks[0]+student[i].marks[1]+student[i].marks[2]<<'\n';
    avg=student[i].average(student[i].marks[0],student[i].marks[1],student[i].marks[2]);
    cout<<"Average: "<<avg<<'\n';
    cout<<'\n';
    if(avg>mx){
        mx=avg;
        q=i;
    }
    if(search.roll==student[i].roll){
        r=i;
    }
}
cout<<"Topper: "<<student[q].name<<'\n';
cout<<"Highest Average: "<<mx<<'\n';
cout<<'\n';
cout<<"Search Result:"<<'\n';
cout<<student[r].name<<" | Roll: "<<search.roll<<'\n';
cout<<"Average: "<<student[r].average(student[r].marks[0],student[r].marks[1],student[r].marks[2]);
}