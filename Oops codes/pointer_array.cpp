#include<iostream>
using namespace std;

int main()
{
	int a[5] = {2,8,1,3,9};

	for(int i=0;i<=4;i++)
    {
		cout<< *(a+i)<<endl;
	}	

	return 0;
}