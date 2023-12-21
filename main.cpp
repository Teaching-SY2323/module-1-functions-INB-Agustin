#include <iostream>

using namespace std;

int Add2Values(float, float);

int main()
{
    float x, y;
    cout
        << "-- Add 2 Values --\n"
        << "Enter x Values: ";
    cin >> x;
    if (x >= 'A' && x<= 'z'){
    	cout << "Enter y Value: ";
    	cin >> y;
    	cout << "The value of the two numbers is: " << y ;
	}else if (!(x >= 'A' && x<= 'z')) {
		cout << "Enter y Value: ";
		cin >> y;
		cout << Add2Values(x, y);
	}else {
		cout << "Invalid! Please Enter a Valid Input";
	}
	
    return 0;
    
}

int Add2Values(float x, float y)
{
    // make your code here
    int total = x + y;
    return total;
}
