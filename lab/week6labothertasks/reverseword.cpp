#include<iostream>
using namespace std;
int main(){
    string n;
    cout<<"Enter a string: ";
    cin>>n;
    cout<<"Reversed String: ";
    for(int x = n.length() - 1; x >= 0; x--){
        cout<<n[x];
    }
    return 0;
}