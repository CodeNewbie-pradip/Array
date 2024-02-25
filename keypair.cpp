// Check if pair with given Sum exists in Array (Two Sum)
// Given an array A[] of n numbers and another number x, 
// the task is to check whether or not there exist two elements in A[] whose sum is exactly x. 

// Examples: 
// Input: arr[] = {0, -1, 2, -3, 1}, x= -2
// Output: Yes  
//0+(-1)=-1, 0+(2)=2, 0+(-3)=-3, 0+1=1
//-1+2=1, -1+(-3)=4, -1+1=0
//2-3=-1, 2+1=3
//-3+1=-2, 

// Explanation:  If we calculate the sum of the output,1 + (-3) = -2
// Input: arr[] = {1, -2, 1, 0, 5}, x = 0
// Output: No

#include<iostream>
using namespace std;

bool keypair(int arr[], int x, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(arr[i]+arr[j]==x)
            {
                cout<<arr[i]<<" "<<arr[j];
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[]={0, -1, 2, -3, 1};
    int target= 5;
    int size=sizeof(arr)/sizeof(arr[0]);
    if(keypair(arr, target, size))
    {
        cout<<"Target is found"<<endl;
    }
    else
    {
        cout<<"Target not found"<<endl;
    }
}