#include <iostream>
using namespace std;

int main()
{
    string name[100];
    int age[100], n = 5;

    name[0] = "ali";
    age[0] = 20;

    int op;
    while (1)
    {
        cout << "1.Show 2.Add 3.Exit: ";
        cin >> op;

        if (op == 1)
        {
            for (int i = 0; i < n; i++)
                cout << name[i] << " " << age[i] << endl;
        }
        else if (op == 2)
        {
            cout << "Enter name & age: ";
            cin >> name[n] >> age[n];
            n++;
        }
        else
            break;
    }
}