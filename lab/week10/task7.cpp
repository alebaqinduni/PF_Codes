#include <iostream>
using namespace std;

float calculateBalance(float balance, int years)
{
    float interest;
    if (balance < 10000)
    {
        interest = balance * 0.05;
    }
    else if (balance <= 50000)
    {
        interest = balance * 0.07;
    }
    else
    {
        interest = balance * 0.10;
    }
    if (years >= 3)
    {
        interest = interest + (balance * 0.02);
    }
    return balance + interest;
}
int main()
{
    float balance;
    int years;
    cout << "Enter balance: ";
    cin >> balance;
    cout << "Enter years: ";
    cin >> years;
    cout << "Updated Balance: " << calculateBalance(balance, years);
    return 0;
}
/*
A bank calculates interest based on balance and years:
• If balance < 10,000 → 5% interest
• 10,000–50,000 → 7%
• Above 50,000 → 10%
• If years ≥ 3 → extra 2% interest
Create function calculateBalance(float balance, int years) that returns updated
balance.
*/