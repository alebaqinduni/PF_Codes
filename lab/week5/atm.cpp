#include<iostream>
using namespace std;
int main(){
    int pin=123,option,add,withdraw,balance,cpin;
    balance=1000;

for(int i=1;i<=3;i++){
    cout<<"Enter Pin: ";
    cin>>cpin;
    if(pin==cpin){cout<<"Login Successful!";}
    else{cout<<"Invalid Pin!";
    return 0;}
}
if(pin==cpin){
    cout<<endl<<"---ATM MENU---"<<endl;
    cout<<"1.Check Balance"<<endl;
    cout<<"2.Deposit Money"<<endl;
    cout<<"3.Withdraw Money"<<endl;
    cout<<"4.Exit"<<endl;
    cin>>option;

if(option==1){cout<<"Current balance: "<<balance<<endl;}
else if(option==2){cout<<"How much to add: ";cin>>add;}
else if(option==3){
    cout<<"How much to withdraw: ";
    cin>>withdraw;
    if(balance<=800){cout<<"Please Collect money!";}
    else{cout<<"Insufficient Balance!"<<endl;}
    }
else if(option==4){cout<<"Program Ended!";return 0;}
else{cout<<"Invalid Credentials!"<<endl;
}}
    return 0;
}