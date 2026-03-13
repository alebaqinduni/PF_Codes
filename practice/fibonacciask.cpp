#include<iostream>
using namespace std;
int main(){
    int n,n1,n2,t;
    n1=0;
    n2=1;
    cout<<"Enter limit for Fibonacci: ";
    cin>>t;
    cout<<n1<<","<<n2<<",";
    for(int x=1;x<=t;x++){
        n=n1+n2;
        cout<<n<<",";
        n1=n2;
        n2=n;

    }
    return 0;
}