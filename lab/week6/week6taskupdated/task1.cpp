#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number of elements: ";
cin>>n;
int arr[n];
int sum=0;
cout<<"Enter all the "<<n<<" numbers: "<<endl;
for(int x=1;x<=n;x++){
    cin>>arr[x];
    sum+=arr[x];
}cout<<"Sum of all elements: "<<sum<<endl;


    return 0;
}