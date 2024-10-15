#include <iostream>
using namespace std;

int main() {
    double temp;
    char unit;
    cout << "Enter the temperature (e.g., 32F or 100C): ";
    cin >> temp >> unit;

    if (unit == 'F' || unit == 'f') {
        cout << temp << " Fahrenheit is " << (temp - 32) * 5 / 9 << " Celsius.\n";
    } else if (unit == 'C' || unit == 'c') {
        cout << temp << " Celsius is " << (temp * 9 / 5) + 32 << " Fahrenheit.\n";
    } else {
        cout << "Invalid unit!\n";
    }

    return 0;
}
