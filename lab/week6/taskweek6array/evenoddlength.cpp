#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    string name;
    cout<<"Enter name: ";
    getline(cin,name);
    for(int x=0;name[x]!='\0';x++){
        count++;
    }
    cout<<"It is "<<count<<endl;
    if(count%2==0){
        cout<<"Even= true! "<<endl;
    }
    else{
        cout<<"Odd= false! "<<endl;
    }
    return 0;
}