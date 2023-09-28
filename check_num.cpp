#include <iostream>
using namespace std;
int main() 
{
    int number;
    
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) 
    {
        cout << "1 (Positive)" << endl;
    } 

    else if (number < 0) 
    {
        cout << "-1 (Negative)" << endl;
    } 
    
    else 
    {
        cout << "0 (Equal to 0)" << endl;
    }

    return 0;
}
