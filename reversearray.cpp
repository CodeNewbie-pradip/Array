#include<iostream>
using namespace std;

void reversearray(int arr[], int size)
{
    int left=0;
    int right=size-1;

    while(left<=right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main()
{
    int arr[]={10, 20, 30, 40, 50};
    int size=5;

    cout<<"Sequential Array: "<<endl;
    for(auto i: arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Reverse Array: "<<endl;
    reversearray(arr, size);

    for(auto i:arr)
    {
        cout<<i<<" ";
    }
}