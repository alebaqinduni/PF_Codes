#include <iostream>
using namespace std;
void calculateSalary(int score, float bonus, int experience, int base)
{
    if (score >= 90)
    {
        bonus = 0.20;
    }
    else if (score <= 89 && score >= 75)
    {
        bonus = 0.10;
    }
    else
    {
        bonus = 0.05;
    }
    float totalBonus;
    if (experience >= 5)
    {
        totalBonus = (base * bonus) + (base * 0.05); // logic
    }
    else
    {
        totalBonus = base * bonus;
    }
    float finalSalary = base + totalBonus;
    cout << "Final Salary: $" << finalSalary << endl;
}
int main()
{
    float bonus;
    int score, base, experience;
    cout << "Enter base salary: ";
    cin >> base;
    cout << "Enter employee score: ";
    cin >> score;
    cout << "Enter years of experience: ";
    cin >> experience;
    int totalBonus;
    calculateSalary(score, bonus, experience, base);
    return 0;
}

/*
A number is called Strong Number if sum of factorial of its digits = number
Example: 145 → 1! + 4! + 5! = 145
Create function isStrong(int num) that returns true/false.
*/