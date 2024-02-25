#include<iostream>
#include<unordered_set>
using namespace std;

// void findunique(int arr[], int n)
// {
//     int ans=0;
//     for(int i=0; i<n; i++)
//     {
//         ans=ans^arr[i];
//     }
//     cout<<ans;
// }

void findunique(int arr[], int n)
{
    unordered_set<int> unique;

    for(int i=0; i<n; i++)
    {
        if(unique.find(arr[i])!= unique.end())
        {
            unique.erase(arr[i]);
        }
        else
        {
            unique.insert(arr[i]);
        }
    }
    for(auto i: unique)
    {
        cout<<i<<" ";
    }
    //return* unique.begin();
}

int main()
{
    int arr[8]={10, 20, 30, 10, 20, 40, 40, 50};
    findunique(arr, 7);
}