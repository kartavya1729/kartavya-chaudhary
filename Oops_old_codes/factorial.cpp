//using for loop
#include<iostream>
  using namespace std;
  int main()
  {
    int i,num,fact=1;

    cout<<"Enter the number whose factorial you want to print: ";
    cin>>num;

    for(i=1;i<=num;i++)
    {
    	fact=fact*i;
     	cout<<i<<"*";
    }

    cout<<endl<<"Factorial of num is:"<<fact;

    return 0;
  }