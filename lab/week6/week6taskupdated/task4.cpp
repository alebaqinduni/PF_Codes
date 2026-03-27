#include<iostream>
using namespace std;
int main(){
    string a[5];
    cout<<"Enter names of 5 students: "<<endl;
    for(int i=0;i<5;i++){cin>>a[i];}
    cout<<"Student Names are: "<<endl;
    for(int i=0;i<5;i++){cout<<i+1<<". "<<a[i]<<endl;}
    return 0;
}





// #include<iostream>
// using namespace std;
// int main(){
//     string n1,n2,n3,n4,n5;
//     cout<<"Enter names of 5 students: "<<endl;
//     cin>>n1;
//     cin>>n2;
//     cin>>n3;
//     cin>>n4;
//     cin>>n5;
//     cout<<"Student Names are: "<<endl;
//     cout<<n1<<" "<<endl;
//     cout<<n2<<endl;
//     cout<<n3<<endl;
//     cout<<n4<<endl;
//     cout<<n5<<endl;
//     return 0;
// }