#include<iostream>
using namespace std;

void ExtremePrint(int arr[], int n)
{
/*  ----------------
    |10|20|30|40|50|
    ----------------
    extreme print
    -----------------
    |50|10|20|30|40|
    ----------------
    i=i-1
    */
   int temp=arr[n-1];
   for(int i=n-1; i>=0; i--)
   {
    arr[i]=arr[i-1];
   }
   arr[0]=temp;
}

int main()
{
    int brr[]={10, 20, 30, 40, 50};
    int size=5;
    cout<<"Before Extreme Print "<<endl;
    for(auto i: brr)
    {
        cout<<i<<" ";
    }
    ExtremePrint(brr, size);
    cout<<"\nAfter Extreme Print "<<endl;
    for(auto i: brr)
    {
        cout<<i<<" ";
    }
}