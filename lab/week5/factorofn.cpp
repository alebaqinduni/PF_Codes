// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int f=1;//store karenge highest factor
//     for(int i=1;i<n;i++){
//         if(n%i==0)f=i;
//     } cout<<f<<"";
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int x=n/2;x>=1;x--){
    if(n%x==0){
        cout<<x<<"";
        break;//to get out of loop
    }
    }
    
}