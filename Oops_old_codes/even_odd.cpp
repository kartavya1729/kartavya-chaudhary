#include <iostream>
using namespace std;
int main() 
{
  int n,i;
  while(i>=0)
  {
  cout << "Enter an integer: ";
  cin >> n;

  if ( n % 2 == 0)
    cout << n << " is even."<<endl;

  else
    cout << n << " is odd."<<endl;
  
  };
  i++;

  return 0;
}