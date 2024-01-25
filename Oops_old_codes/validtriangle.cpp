#include <iostream>
using namespace std;
int main() 
{
    int a, b, c;

    cout << "Enter the length of the first side: ";
    cin >> a;

    cout << "Enter the length of the second side: ";
    cin >> b;

    cout << "Enter the length of the third side: ";
    cin >> c;

    if (a + b <= c || a + c <= b || b + c <= a) 
    {
        cout << "Invalid triangle!" << endl;
    } 
    else if (a == b && b == c) 
    {
        cout << "1 (Equilateral)" << endl;
    } 
    else if (a == b || b == c || a == c) 
    {
        cout << "0 (Isosceles)" << endl;
    } 
    else 
    {
        cout << "-1 (Scalene)" << endl;
    }

    return 0;
}
