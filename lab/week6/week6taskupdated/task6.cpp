#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    string a[n];         //stringgggggggggggggggg
    cout<<"Enter names of "<<n<<" students: "<<endl;
    for(int x=0;x<n;x++){
        cin>>a[x];
    } 
    cout<<"Students in alphabetical order: "<<endl;
    for(int x=0;x<n-1;x++){
        for(int j=x+1;j<n;j++){
         if(a[x] > a[j]){
            string alp=a[x];
            a[x]=a[j];
            a[j]=alp;
         }
        }}
        for(int x=0;x<n;x++){
       cout<<a[x]<<endl;
    }
    
    return 0;
}