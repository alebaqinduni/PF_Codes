// #include<iostream>
// using namespace std;
// int main(){
//     int multiple;
//     int t;
//     cout<<"Enter the number for which you want the table: ";
//     cin>>t;
//     for(int x=1;x<=10;x++){
//         multiple=t*x;
//         cout<<t<<"*"<<x<<"="<<multiple<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int multiple,table=24;
    for(int x=1;x<=10;x++){
        multiple=table*x;
        cout<<table<<"*"<<x<<"="<<multiple<<endl;
    }
    cout<<"this is 50 table"<<endl;
    table=50;
    for(int x=1;x<=10;x++){
        multiple=table*x;
        cout<<table<<"*"<<x<<"="<<multiple<<endl;}
    cout<<"table of 29"<<endl;
    table=29;
    for(int x=1;x<=10;x++){
        multiple=table*x;
        cout<<table<<"*"<<x<<"="<<multiple<<endl;
    }
    return 0;
}