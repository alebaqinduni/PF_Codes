#include<iostream>
using namespace std;

int findLargestNumber(int arr[], int size){
    int max = arr[0];

    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    int arr[100];
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int largest = findLargestNumber(arr, n);
    cout<<"Largest number is: "<<largest;
    return 0;
}