//for loop
// #include<iostream>
// using namespace std;
// int main(){
//     int n,d;
//     cout<<"Enter a Number: ";//123
//     cin>>n;
//     cout<<"Enter the digit to check: ";//3
//     cin>>d;
//     int count=0;        //123=123/10=12/10=1
//     for(int x=n;x>0;x=x/10){ //123%10=3
//         if(x%10==d){
//             count++;
//         } 
//     } cout<<"Frequency: "<<count<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n,d;
    cout<<"E: ";cin>>n;
    cout<<"D: ";cin>>d;
    int count=0;
    while(n>0){
        if(n%10==d){
            count++;
        }            n/=10;

    }cout<<"F: "<<count<<endl;
    return 0;
}


