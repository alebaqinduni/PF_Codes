#include<iostream>
using namespace std;
int main(){
    char word[100];
    cout<<"Enter a Word: ";
    cin>>word;
    for(int x=0;word[x]!='\0';x++){
        cout<<word[x]<<" found at position "<<x<<endl;
    }
    return 0;
}