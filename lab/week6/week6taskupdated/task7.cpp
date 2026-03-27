//---------------------------1-------------------------------
#include<iostream>
using namespace std;
int main(){
    string productNames[4]={"Apple","Banana","Orange","Mango"};
    float prices[4]={0.5,0.3,0.8,1.2};
    int quantity[4]={50,100,30,20};
    for(int x=0;x<4;x++){
    float total=prices[x]*quantity[x];
    cout<<"Total price of "<<productNames[x]<<" is "<<total<<"$"<<endl;
    }
    return 0;
}




//---------------------------2-------------------------------
// #include<iostream>
// using namespace std;
// int main(){  
//     string productNames[4] = {"Apple", "Banana", "Orange", "Mango"};
//     float prices[4] = {0.5, 0.3, 0.8, 1.2};
//     int quantity[4] = {50, 100, 30, 20};
//     for(int i = 0; i < 4; i++){
//         float total = prices[i] * quantity[i];
//         cout<<productNames[i]<<": $"<<prices[i]
//             <<", "<<quantity[i]<<" in stock"
//             <<", Total value: $"<<total<<endl;
//     }
//     return 0;
// }