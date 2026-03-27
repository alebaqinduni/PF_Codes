//----------------1------------------------------
#include<iostream>
using namespace std;
int main(){
int customer_id;
string name;
int previousmeter,currentmeter,total;
cout<<"Enter your name:";
cin>>name;
cout<<"Enter your customer id: ";
cin>>customer_id;
cout<<"Enter previous meter reading:";
cin>>previousmeter;
cout<<"Enter current meter reading: ";
cin>>currentmeter;
total=(currentmeter-previousmeter)*35;
cout<<total;
int fixed_charge=500;
int final=total+fixed_charge;
cout<<final<<"is this "<<endl;
float tax=final*0.07;
cout<<name<<customer_id<<"is"<<tax<<endl;
return 0;
}