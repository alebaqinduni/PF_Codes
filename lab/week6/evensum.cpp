#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    while(n>0){
        if(n%2!=0)continue;
        int ld=n%10;
        n=n/10;
        sum+=ld;
    }
    cout<<sum;
    return 0;
}
//problemmm inn thiss codee
//will correct it when get time!


