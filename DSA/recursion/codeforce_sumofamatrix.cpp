#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> &a,vector<vector<int>> &b,int x,int y,vector<vector<int>> &p){
    if(x<0){
        for(int i=0;i<a.size();i++){
        for(int j=0;j<a[0].size();j++){
            cout<<p[i][j]<<" ";
        }
        cout<<'\n';
    }
        return;
    }
    if(y<0){
        print(a,b,x-1,a[0].size()-1,p);
        return;}
    p[x][y]=a[x][y]+b[x][y];
    print(a,b,x,y-1,p);


}
int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>> a(r,vector<int>(c));
    vector<vector<int>> b(r,vector<int>(c));
    vector<vector<int>> p(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>b[i][j];
        }
    }
    print(a,b,r-1,c-1,p);
}