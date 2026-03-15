#include<iostream>
using namespace std;
int main(){
    int t1,t2,temperature_difference;
    cout<<"Enter 1st temperature: ";
    cin>>t1;
    cout<<"Enter 2nd temperature: ";
    cin>>t2;
    temperature_difference=t1-t2;
    if(temperature_difference>10){
        cout<<"Difference is too Big"<<endl;
}
else{
    cout<<"Difference is Normal"<<endl;
}
return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int t1,t2,temperature_difference;
//     cout<<"Enter 1st temperature: ";
//     cin>>t1;
//     cout<<"Enter 2nd temperature: ";
//     cin>>t2;
//     temperature_difference=t1-t2;
//     if(temperature_difference>10 || temperature_difference<-10){
//         cout<<"Difference is too Big"<<endl;
// }
// else{
//     cout<<"Difference is Normal"<<endl;
// }
// return 0;
// }