#include<iostream>
using namespace std;
int main(){
    int number[5];

    cout<<"Enter 1st Number: ";
    cin>>number[0];
   cout<<"Enter 2nd Number: "; 
   cin>>number[1];
   cout<<"Enter 3rd Number: ";
   cin>>number[2];
   cout<<"Enter 4th Number: ";
   cin>>number[3];
   cout<<"Enter 5th Number: ";
   cin>>number[4];

    
    cout<<"The 1st element at location number[0] is: "<<number[0]<<endl;
    cout<<"The last element at location number[0] is: "<<number[4]<<endl;
    return 0;
}