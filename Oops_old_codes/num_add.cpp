#include <iostream>
using namespace std;
int main() 
{
  int num1, num2, sum;
    
  cout << "Enter two numbers: "<<endl;
  cin >> num1;
  cin >> num2;

  sum = num1 + num2;
  cout << num1 << " + " << num2 << " = " << sum;     

  return 0;
}