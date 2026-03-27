#include<iostream>
using namespace std;
int main(){
    int option;
    string books[100];
    int count = 0;
    while(true){
        cout<<endl<<"------- Library System ----------"<<endl;
        cout<<"1. Add Books"<<endl;
        cout<<"2. View Books"<<endl;
        cout<<"3. Borrow Books"<<endl;
        cout<<"4. Exit"<<endl;
        cin>>option;
        if(option == 1){
            int n;
            cout<<"Number of books to add: ";
            cin>>n;
            cout<<"Enter book names:"<<endl;
            for(int i = 0; i < n; i++){
                cin>>books[count];
                count++;
            }
        }
        else if(option == 2){
            cout<<"Available Books:"<<endl;
            for(int i = 0; i < count; i++){
                cout<<books[i]<<endl;
            }
        }
        else if(option == 3){
            string bk;
            cout<<"Enter book name to borrow: ";
            cin>>bk;
            bool found = false;
            for(int i = 0; i < count; i++){
                if(books[i] == bk){
                    found = true;
                    // remove book
                    for(int j = i; j < count-1; j++){
                        books[j] = books[j+1];
                    }
                    count--;
                    cout<<"Book "<<bk<<" borrowed successfully!"<<endl;
                    break;
                }
            }
            if(!found){
                cout<<"Book not found!"<<endl;
            }
        }
        else if(option == 4){
            cout<<"Exiting..."<<endl;
            break;
        }
        else{
            cout<<"Invalid option!"<<endl;
        }
    }
    return 0;
}