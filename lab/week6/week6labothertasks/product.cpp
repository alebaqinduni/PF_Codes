#include<iostream>
using namespace std;
int main(){
    int n,product=1;          //product=1
    cin>>n;
    while(n>0){
       int ld=n%10;        //ld=last digit
    n=n/10;
    product*=ld;
    }
    cout<<product;
    return 0;
}