#include <iostream>
using namespace std;
int main(){
    int n1;
    int n2;
    char opp;
    cin>>n1;
    cin>>opp;
    cin>>n2;
    if(opp=='+'){cout<<"Sum is: "<<n1+n2<<endl;}
    if(opp=='-'){cout<<"Difference is: "<<n1-n2<<endl;}
    if(opp=='*'){cout<<"Product is: "<<n1*n2<<endl;}
    if(opp=='/'){cout<<"Quotient is: "<<n1/n2<<endl;}
}