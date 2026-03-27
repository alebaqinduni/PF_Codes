#include<iostream>
using namespace std;
int main(){
    string name;
    char letter;
    cout<<"Enter a name: ";
    cin>>name;
    cout<<"Enter a letter: ";
    cin>>letter;
    int count=0;
    bool isFound = false;
    for(int x=0;name[x]!='\0';x++){
    if(name[x]==letter){
        isFound=true;
        count++;
    }}
    if(isFound){
        cout<<"Letter Exists! "<<count<<" times! "<<endl;
    }else
    {cout<<"Letter doesn't exists!"<<endl;
    }
    
    return 0;
}





















/*
#include<iostream>
using namespace std;

int main(){
    string name;
    char letter;

    cout<<"Enter a name: ";
    cin>>name;

    cout<<"Enter a letter: ";
    cin>>letter;

    int count = 0;

    for(int x = 0; name[x] != '\0'; x++){
        if(name[x] == letter){
            count++;
        }
    }

    if(count > 0){
        cout<<"Letter appears "<<count<<" times"<<endl;
    }
    else{
        cout<<"Letter does not exist"<<endl;
    }

    return 0;
}
    */