#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<sizeof(a)<<endl;   //char:1

    short b;
    cout<<sizeof(b)<<endl;  //short:2

    float x;
    cout<<sizeof(x)<<endl;  //float:4

    int y;
    cout<<sizeof(y)<<endl;  //int:4

    long c;
    cout<<sizeof(c)<<endl;   //long:8

    double d;
    cout<<sizeof(d)<<endl;   //double:8

    string z;
    cout<<sizeof(z)<<endl;   //string:24

    return 0;
}