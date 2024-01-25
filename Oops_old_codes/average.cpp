#include <iostream>
using namespace std;
int main() 
{
    float num1, num2, num3;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    float average = (num1 + num2 + num3) / 3.0;

    cout << "The average value is: " << average << endl;

    return 0;
}
