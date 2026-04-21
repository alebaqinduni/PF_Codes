#include <iostream>
using namespace std;
void tax(float itemamount, float taxRate, char type)
{
    if (type == 'M')
    {
        taxRate = 0.06;
    }
    else if (type == 'E')
    {
        taxRate = 0.08;
    }
    else if (type == 'S')
    {
        taxRate = 0.10;
    }
    else if (type == 'V')
    {
        taxRate = 0.12;
    }
    else if (type == 'T')
    {
        taxRate = 0.15;
    }
    else
    {
        cout << "Invalid type" << endl;
        return;
    }
    float taxAmount = itemamount * (taxRate);
    float finalPrice = itemamount + taxAmount;
    cout << "Final price: $" << finalPrice << endl;
}
int main()
{
    float itemAmount, taxRate;
    char type;
    cout << "Enter Vehicle Type: ";
    cin >> type;
    cout << "Enter vehicle amount: ";
    cin >> itemAmount;
    tax(itemAmount, taxRate, type);
    return 0;
}
/*
You’ve been hired by an Automobile company to write a program to help the tax
collector calculate vehicle taxes. Vehicle taxes are based on two pieces of information;
the price of the vehicle and the vehicle type code.

The formula of calculating the final price of an item is:
Final Price = Item Price + Tax Amount
Tax rates are in the table below
*/