#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int count=0;
    int arr[n];
    cout<<"Enter "<<n<<" numbers: "<<endl;
    for(int x=0;x<n;x++){
        cin>>arr[x];
        if(arr[x]%2==0){
         
        count++;
    }
    }
    cout<<"Total Even Numbers: "<<count<<endl;

    
    return 0;
}