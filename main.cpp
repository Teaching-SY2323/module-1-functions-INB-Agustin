#include <iostream>

using namespace std;

int Add2Values(int, int);

int main()
{
    int x, y;
    cout
        << "-- Add 2 Values --\n"
        << "Enter x Values: ";
    cin >> x;
    cout << "Enter y Value: ";
    cin >> y;

    cout << "The value of the two numbers is: ";

    cout << Add2Values(x, y);

    return 0;
    
}

int Add2Values(int x, int y)
{
    // make your code here
    int total = x + y;
    return total;
}
