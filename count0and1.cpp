#include<iostream>
using namespace std;

void countzerone(int arr[], int n)
{
    int zerocount=0;
    int onescount=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            zerocount++;
        }
        if(arr[i]==1)
        {
            onescount++;
        }
    }
    int i=0;
    for(; i<zerocount; i++)
    {
        arr[i]=0;
    }
    for(int j=i;j<(i+onescount); j++)
    {
        arr[j]=1;
    }
}

int main()
{
    int arr[]={0, 1, 0, 1, 1, 0, 0, 1, 1, 0};
    int size=10;
    countzerone(arr, size);
    for(auto i: arr)
    {
        cout<<i<<" ";
    }

}