#include<iostream>
using namespace std;

/* --------------------------------------------------
   TASK 06: FIND LARGEST NUMBER (FUNCTION)
   This function takes array + size
   and returns the largest value
-------------------------------------------------- */
int findLargestNumber(int arr[], int size){
    int max = arr[0];   // assume first is largest

    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];   // update max
        }
    }

    return max;
}

/* --------------------------------------------------
   TASK 05: CHECK DUPLICATE (FUNCTION)
   returns true if number already exists
-------------------------------------------------- */
bool isAlreadyEntered(int arr[], int size, int num){
    for(int i = 0; i < size; i++){
        if(arr[i] == num){
            return true;   // found duplicate
        }
    }
    return false;
}

/* --------------------------------------------------
   TASK 04: REVERSE ARRAY (FUNCTION)
-------------------------------------------------- */
void printReverseArray(int arr[], int n){
    cout<<"Reversed Array: ";
    for(int i = n-1; i >= 0; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

/* ==================================================
   TASK 01: DECLARE + DISPLAY ARRAY
================================================== */
    int arr1[5] = {10,20,30,40,50};

    cout<<"Task 01: Array elements: ";
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<"\n\n";


/* ==================================================
   TASK 02: PRINT 2ND AND 4TH ELEMENT
================================================== */
    cout<<"Task 02: 2nd and 4th elements: ";
    cout<<arr1[1]<<" "<<arr1[3]<<endl<<endl;


/* ==================================================
   TASK 03: USER INPUT ARRAY + PRINT FIRST & LAST
================================================== */
    int arr2[5];

    cout<<"Task 03: Enter 5 numbers:\n";
    for(int i=0;i<5;i++){
        cin>>arr2[i];   // storing user input
    }

    cout<<"First element: "<<arr2[0]<<endl;
    cout<<"Last element: "<<arr2[4]<<endl<<endl;


/* ==================================================
   TASK 05: N NUMBERS INPUT + DISPLAY
================================================== */
    int n;
    cout<<"Task 05: Enter size: ";
    cin>>n;

    int arr3[100];

    cout<<"Enter "<<n<<" numbers:\n";
    for(int i=0;i<n;i++){
        cin>>arr3[i];
    }

    cout<<"You entered: ";
    for(int i=0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<"\n\n";


/* ==================================================
   TASK 05 (VALIDATE INPUT - DUPLICATES)
================================================== */
    int arr4[100], size=0;

    cout<<"Task 05 (Duplicate Check): Enter "<<n<<" numbers:\n";

    for(int i=0;i<n;i++){
        int num;
        cin>>num;

        if(isAlreadyEntered(arr4, size, num)){
            cout<<"Already Entered\n";
        }
        else{
            arr4[size] = num;   // store number
            size++;
        }
    }
    cout<<endl;


/* ==================================================
   TASK 06: FIND LARGEST NUMBER
================================================== */
    int largest = findLargestNumber(arr3, n);
    cout<<"Largest number is: "<<largest<<endl<<endl;


/* ==================================================
   TASK 04: REVERSE ARRAY
================================================== */
    printReverseArray(arr3, n);
    cout<<endl;


/* ==================================================
   TASK 02 (STRING): REVERSE STRING
================================================== */
    string str;
    cout<<"Task String Reverse: Enter string: ";
    cin>>str;

    cout<<"Reversed: ";
    for(int i=str.length()-1;i>=0;i--){
        cout<<str[i];
    }
    cout<<"\n\n";


/* ==================================================
   TASK 03: NEXT LETTER (ASCII CONCEPT)
================================================== */
    cout<<"Task Next Letter: Enter string: ";
    cin>>str;

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='z'){
            str[i]='a';   // special case
        }
        else{
            str[i]=str[i]+1;   // ASCII increment
        }
    }

    cout<<"Updated string: "<<str<<endl<<endl;


/* ==================================================
   DELETE LOGIC DEMO (VERY IMPORTANT)
================================================== */
    int arr5[5] = {10,20,30,40,50};
    int size5 = 5;
    int del = 30;

    // find index of element to delete
    int index = -1;

    for(int i=0;i<size5;i++){
        if(arr5[i] == del){
            index = i;
            break;
        }
    }

    if(index != -1){
        // SHIFT LEFT
        for(int j=index; j<size5-1; j++){
            arr5[j] = arr5[j+1];
        }
        size5--;   // reduce size
    }

    cout<<"After deletion: ";
    for(int i=0;i<size5;i++){
        cout<<arr5[i]<<" ";
    }
    cout<<endl;

    return 0;
}