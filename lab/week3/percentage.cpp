#include<iostream>
using namespace std;
int main(){
    float percentage;
    cout<<"Enter your percentage: "; cin>>percentage;
    if(percentage>=90){
        cout<<"Your grade is A+"<<endl;
    }
    else if(percentage>=80){
        cout<<"Your grade is A"<<endl;
    }
    else if(percentage>=70){
        cout<<"Your grade is B+"<<endl;
    }
    else if(percentage>=60){
        cout<<"Your grade is B"<<endl;
    }
    else if(percentage>=50){
        cout<<"Your grade is C+"<<endl;
    }
    else if(percentage>=40){
        cout<<"Your grade is C"<<endl;
    }
    else if(percentage>=30){
        cout<<"Your grade is D+"<<endl;
    }
    else if(percentage>=20){
        cout<<"Your grade is D"<<endl;
    }
    else{
        cout<<"Your grade is F"<<endl;
    }
    return 0;
}