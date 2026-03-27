#include<iostream>
using namespace std;
int main(){
    string n;
    cout<<"Enter a string: ";
    cin>>n;
    for(int i = 0; n[i] != '\0'; i++){
        if(n[i] == 'z'){
            n[i] = 'a';
        }
        else if(n[i] == 'Z'){
            n[i] = 'A';
        }
        else{
            n[i] = n[i] + 1;
        }
    }
    cout<<"Updated string: "<<n;
    return 0;
}