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



// #include<iostream>
// using namespace std;
// int main(){
//     int a[]={1,2,3,4,5,6};
//     int n=sizeof(a)/4;
//     int i=0;
//     int j=n-1;
//     while(i<j){
//         int t=a[i];
//         a[i]=a[j];
//         a[j]=t;
//         i++;
//         j--;
//     }
//     for(int x=0;x<n;x++){
//         cout<<a[x]<<" ";

//     }
//     return 0;
// }




//-------------------------------------------

// #include <iostream>
// #include<string>
// using namespace std;
// int main(){
// string a= " areeba ";
// cout<<a<<endl;
// reverse(a.begin(),a.end());   //whole reverse
// cout<<a<<endl;
// return 0;
// }



//some part reverse.   reverse(a.begin()+2,a.begin()+4);