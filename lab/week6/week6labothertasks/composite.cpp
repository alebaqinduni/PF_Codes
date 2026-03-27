#include<iostream>
using namespace std;
int main(){
int n;
bool flag=true;
cout<<"Enter number: ";
cin>>n;
    for(int x=2;x<=n/2;x++){
        if(n%x==0)//composite number is divisible by more than 2 numbers
        flag=false;
        break;//to get out of loop
    }
    if(n==1){cout<<"Neither prime nor composite";}
    else if(flag==true){cout<<"Prime";}
    else{cout<<"Composite";}
}