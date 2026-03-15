#include<iostream>
using namespace std;
int main(){
    int n,d,f=0;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Enter digit: ";
    cin>>d;
    while(n>0){
        if(n%10==d) f++;
        n/=10;
    }
    cout<<"Frequency of "<<d<<" is "<<f;
    return 0;
}