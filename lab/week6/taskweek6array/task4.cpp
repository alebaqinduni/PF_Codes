#include<iostream>
using namespace std;
int main(){
    int number[5];

    for(int x=0;x<5;x++){
        cout<<"Enter Number: ";
        cin>>number[x]; 
    }
    
    cout<<"The 1st element at location number[0] is: "<<number[0]<<endl;
    cout<<"The last element at location number[0] is: "<<number[4]<<endl;
    return 0;
}