#include<iostream>
using namespace std;
int main(){
    string username,password,name,coursename;
    int option,age;
//for loop
for(int i=1;i<=3;i++)
{
        cout<<"Enter Username: ";
        cin>>username;

        cout<<"Enter Password: ";
        cin>>password;
//1st 
        if(username=="admin" && password=="123"){
            cout<<"Login Successful!"<<endl;
            break;
        }
        else{
            cout<<"Wrong Credentials!"<<endl;
        }
//2nd 
        if(i<=3 && !(username=="admin" && password=="123")){
            cout<<"Too many Attempts!.Program terminated";}
        return 0;
}







//for loop
for(int i=1;i<+5;i++)
{
cout<<endl<<"---UNIVERSITY MANAGEMENT SYSTEM---"<<endl;
cout<<"1. Add Student "<<endl;
cout<<"2. View Student"<<endl;
cout<<"3. Add Course"<<endl;
cout<<"4. Exit"<<endl;

cout<<"Enter Option: ";
cin>>option;

     if(option==1){
        cout<<"Enter Student Name: ";
        cin>>name;
           
        cout<<"Enter Student age: ";
        cin>>age;
        
        cout<<"Student added Successfully!"<<endl;
    }


     else if(option==2){
        if(name!=""){
            cout<<"Student Name: "<<name<<endl;
            cout<<"Student Age: "<<age<<endl;}
        else{
            cout<<"No Record Found!"<<endl;
        }
     }



    else if(option==3){
        cout<<"Enter Course Name: ";
        cin>>coursename;

        cout<<"Course added Successfully!"<<coursename<<endl;
    }

    else if(option==4){
        cout<<"Program Exit!"<<endl;
        break;
    }

    else {cout<<"Invalid Choice!"<<endl;}
     }
return 0;
}
 