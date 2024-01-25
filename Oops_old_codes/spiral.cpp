#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    int sr=0,sc=0,er=2,ec=3;
    while(sr<=er && sc<=ec)
    {
        for(int j=sc;j<=ec;j++)
        {
            cout<<arr[sr][j]<<" ";
        }
        sr++;
        for(int i=sr;i<=er;i++)
        {
            cout<<arr[i][ec]<<" ";
        }
        ec--;
        if(er<sr)
        {
            for(int j=ec;j>=sc;j--)
            {
            cout<<arr[er][j]<<" ";
        }
        er--;
        }
        if(ec<sc)
        {
            for(int i=er;i>=sr;i--)
            {
            cout<<arr[i][sc]<<" ";
        }
        sc++;
        }
    }
    return 0;
}
