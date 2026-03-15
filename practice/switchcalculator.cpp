#include<iostream>
using namespace std;
int main(){
    int n1;
    int n2;
    char opp;
    cin>>n1;
    cin>>opp;
    cin>>n2;
    switch(opp){
     case '+':cout<<"Sum is: "<<n1+n2;
     break;
     case '-':cout<<"Difference is: "<<n1-n2;
     break;
     case '/':cout<<"Quotient is: "<<n1/n2;
     break;
     case '*':cout<<"Product is: "<<n1*n2;
     break;
     default: cout<<"Invalid operator!";
 }
    return 0;
}