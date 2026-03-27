#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of rows: ";
    cin>>m;
    cout<<"Enter number of columns: ";
    cin>>n;
    for(int x=1;x<=m;x++){
        for(int x=1;x<=n;x++){
            cout<<"* ";
        }cout<<endl;
    }
    return 0;
}