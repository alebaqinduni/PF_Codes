#include<iostream>
using namespace std;
bool check(string word,char letter){
    bool isFound=false;
    for(int x=0;word[x]!='\0';x++){    // x<word.length()  or  word[x]!='\0' 
        if(word[x]==letter){
            isFound=true;
            break;
        }
    }return isFound;
}
int main(){
    string word;
    char letter;
    cout<<"Enter a Word: ";
    cin>>word;
    cout<<"Enter a Letter: ";
    cin>>letter;
    if( check(word,letter)){
        cout<<letter<<" is found in "<<word;
    }
    else{
        cout<<letter<<" is not found in "<<word;
    }
    return 0;
}