#include <iostream>
using namespace std;

int main(){
    int displacement, time, velocity;
    
    cout << "Enter displacement in meters: ";
    cin >> displacement;
    
    cout << "Enter time in seconds: ";
    cin >> time;
    
    if(time != 0) {
        velocity = displacement / time;
        cout << "Velocity is: " << velocity << " m/s" << endl;
    } else {
        cout << "Time cannot be zero!" << endl;
    }
    
    return 0;
}