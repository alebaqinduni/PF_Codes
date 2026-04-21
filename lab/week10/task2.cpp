#include <iostream>
using namespace std;
void volume(float length, float width, float height, string output)
{
    float volume = length * width * height / 3;
    if (output == "centimeter")
    {
        cout << volume * 100000000 << " centimeter" << endl;
    }
    else if (output == "meter")
    {
        cout << volume * 1000000 << " meter" << endl;
    }
    else
    {
        cout << volume / 1000000000 << " kilometer" << endl;
    }
}
int main()
{
    float length, width, height;
    string output;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter output: ";
    cin >> output;

    volume(length, width, height, output);
    return 0;
}

/*
Create a function that takes the length, width, height (in meters) and output unit in which
you want to see the answer and returns the volume of a pyramid in the correct unit.
Notes:
● The units used are limited to: millimeters, centimeters, meters and kilometers.
● Ensure you return the answer and add the correct unit in the format cubic <unit>.
Test Cases:
● pyramidVolume(4, 6, 20, "centimeters") ➞ "160000000.000 cubic
centimeters"
● pyramidVolume(1843, 1823, 923, "kilometers") ➞ "1.034 cubic kilometers"
● pyramidVolume(18, 412, 93, "millimeters") ➞ "229896000000000.000 cubic
millimeters"
*/