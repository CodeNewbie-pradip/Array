#include<iostream>
#include<limits.h>
using namespace std;

void printingarray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int findMax(int arr[], int size)
{
    int maxi=INT_MIN;

    for(int i=0; i<size; i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
    return maxi;
}

int findMin(int arr[], int size)
{
    int mini=INT_MAX;

    for(int i=0; i<size; i++)
    {
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
    }
    return mini;
}

int main()
{
    int arr[]={10, 20, 30, 40, 50, 5, 0, 70, 80, 110};
    int size=10;
    cout<<"printing Array Elements:"<<endl;
    printingarray(arr, size);
    cout<<endl;
    cout<<"Maximum element in array -> "<<findMax(arr, size)<<endl;
    cout<<"Minimum element in array -> "<<findMin(arr, size)<<endl;
}