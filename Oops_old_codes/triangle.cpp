#include <iostream>
using namespace std;
int main()
{
    int base, height, area;
    
    cout << "Enter the base of the triangle: ";
    cin >> base;

    cout << "Enter the height of the triangle: ";
    cin >> height;
    
    area = 0.5 *(base * height);
    
    cout << "Area of Triangle: " << area;
    
    return 0;
}