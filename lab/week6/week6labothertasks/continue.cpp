#include<iostream>
using namespace std;
//wite all number from 1 to 20 except 3 and 8
int main(){
    int n;
    for(int i=1;i<=20;i++){
        //1.
        // if(i!=3 && i!=8){cout<<i<<",";}
        //or
        //2.
        if(i==3 || i==8)continue;
        cout<<i<<",";
        //or
        //3.
        //if(i==3)continue;
        //if(i==8)continue;
        //cout<<i<<",";
    }
    return 0;
}