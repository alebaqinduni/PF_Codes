#include<iostream>
using namespace std;
int main(){
    int sum=0;
    float average=0;
    int a[]={1,2,3,4,5};
    for(int x=0;x<5;x++){
        sum+=a[x];
        average=sum/5;
    }
    cout<<"Sum of first 5 natural numbers is: "<<sum<<endl;
    cout<<"Average of first 5 natural numbers is: "<<average<<endl;
    return 0;
}