#include <iostream>
#include <string>

using namespace std;

int Add2Values(float, float);

int main() {
    float x = 0, y = 0;
    string input;

    cout << "-- Add 2 Values --\n"
         << "Enter x Value: ";
    cin >> input;

    try {
        x = stof(input); 
    } catch (const std::invalid_argument& e) {
        cout << "Invalid input for x. Setting x to 0." << endl;
    }

    cout << "Enter y Value: ";
    cin >> input;

    try {
        y = stof(input); 
    } catch (const std::invalid_argument& e) {
        cout << "Invalid input for y. Setting y to 0." << endl;
    }


    int sum = static_cast<int>(Add2Values(x, y));
    cout << "The sum of the two numbers is: " << sum << endl;

    return 0;
}

int Add2Values(float x, float y) {
    return x + y;
}
