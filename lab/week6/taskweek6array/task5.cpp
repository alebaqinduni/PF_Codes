#include<iostream>
using namespace std;
int main(){
    int number[100];   //max number
    int n;
    cout<<"Enter Number of Elements: ";
    cin>>n;
    
    for(int x=0; x<n; x++){
        cout<<"Enter Number " << x+1<< ": ";
        cin>>number[x]; 
    }
    
    cout<<"You entered:"<<endl;
    for(int x=0; x<n; x++){
        cout<<"The element at location number["<<x<<"] is: "<<number[x]<<endl;
    }
    
    return 0;
}