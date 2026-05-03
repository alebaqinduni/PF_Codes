#include <iostream>
using namespace std;

int take()
{
    int x;
    cin >> x;
    return x;
}

int maximumMarks(int marks[], int size)
{
    int a = marks[0];
    for (int i = 1; i < size; i++)
    {
        if (marks[i] > a)
        {
            a = marks[i];
        }
    }
    return a;
}

void give(int x)
{
    cout << x;
}

int main()
{
    int marks[100];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks for student: ";
        marks[i] = take();
    }

    int b = maximumMarks(marks, 5);

    give(b);

    return 0;
}