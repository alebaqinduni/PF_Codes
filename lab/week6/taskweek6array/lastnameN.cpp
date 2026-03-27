#include<iostream>
using namespace std;
int main(){
    string name;
    char letter='n';
    
    cout<<"Enter a name: ";
    getline(cin,name);
    
    if(name[name.length()-1]==letter){
        cout<<"True "<<endl;
    }
    else{
        cout<<"False "<<endl;
    }
    
    return 0;
}