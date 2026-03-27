#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" numbers: "<<endl;
    for (int i=0;i<n;i++){
    cin>>arr[i];}
    int l=arr[0];// after input cin
    int s=arr[0];// after input cin
    for (int i=0;i<n;i++){
    if(l<arr[i]){
        l=arr[i];
    }
    if(s>arr[i]){
        s=arr[i];
    }
   
    }
    cout<<"Largest Number: "<<l<<endl;
    cout<<"Smallest Number: "<<s<<endl;
    
    return 0;
}