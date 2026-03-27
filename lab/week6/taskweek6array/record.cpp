#include<iostream>
using namespace std;
int main(){
    string name[100];
    int IDs[100];
    float GPA[100];
    int count;
    cout<<"How many records you want to enter: ";
    cin>>count;
    for(int x=0;x<count;x++){
        cout<<"Name: ";
        cin>>name[x];
        cout<<"Roll No: ";
        cin>>IDs[x];
        cout<<"GPA: ";
        cin>>GPA[x];
        }
    for(int x=0;x<count;x++){
        cout<<"Name: "<<name[x]<<" of "<<IDs[x]<<" roll no with gpa of "<<GPA[x]<<endl;
    }
        return 0;
}


//if user wants to enter more records then this code:
/*
#include<iostream>
using namespace std;
int main(){
    string name[100];
    int IDs[100];
    float GPA[100];
    int count=0;
    bool more=true;
    while(more==true){
        cout<<"Name: ";
        cin>>name[count];
        cout<<"Roll No: ";
        cin>>IDs[count];
        cout<<"GPA: ";
        cin>>GPA[count];
        cout<<"If you want to enter more,press 1 otherwise 0: ";
        cin>>more;  //bool input
        count++;
        }
        return 0;
}

*/