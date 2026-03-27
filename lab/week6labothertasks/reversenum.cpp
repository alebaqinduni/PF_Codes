//------------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
    string n;
    cout<<"Enter number: ";
    cin>>n;
    for(int x=n.length()-1;x>=0;x--){
        cout<<n[x];
    }
    return 0;
}

//------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of elements: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter "<<n<<" numbers, one per line: "<<endl;
//     for(int x = 0; x < n; x++){
//         cin>>arr[x];
//     }
//     cout<<"Numbers in reverse order: "<<endl;
//     for(int x = n-1; x >= 0; x--){ //important line
//         cout<<arr[x]<<endl;
//     }
//     return 0;
// }