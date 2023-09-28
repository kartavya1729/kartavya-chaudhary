#include <iostream>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int ct = 0;
    for(int i=2;i<=n-1,i++)
    {
        if(n%i==0)
        {
            ct++;
        }
    }
    if(ct>0)
    {
        cout<<"not a prime number"<<endl;
    }
    
    return 0;    
}