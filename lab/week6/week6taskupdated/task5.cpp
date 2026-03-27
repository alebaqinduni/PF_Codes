#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of customers: ";
    cin>>n;
    string a[n];           //string pleaseeeeeeee!
    cout<<"Enter number of "<<n<<" customers: "<<endl;
    for(int x=0;x<n;x++){
        cin>>a[x];
    }
    char l;
    int count=0;
    cout<<"Enter a letter to Check: ";cin>>l;
    for(int i=0;i<n;i++){
     if(a[i][0]==l){        //[0] to add and l=char
     count++;}
    }
    cout<<"Total number of letters starting with "<<l<<": "<<count<<endl;
    
    return 0;
}