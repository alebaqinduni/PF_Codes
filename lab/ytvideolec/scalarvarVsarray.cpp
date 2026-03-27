#include<iostream>
using namespace std;
int main(){
    int array_size=130;
    int stu[array_size];
    for(int x=0;x<array_size;x++){
        cout<<"Enter "<<x+1<<" element: ";
        cin>>stu[x];
    }

    return 0;
}