#include<iostream>
#include<vector>
using namespace std;

int findmissingelement(vector<int>&arr)
{
    int n=arr.size();
    int sumarr=0;
    for(int i=0; i<n; i++)
    {
        sumarr+=arr[i];
    }
    int nosum=n*(n+1)/2;
    return nosum-sumarr;
}

int main()
{
    int n=5;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int ans=findmissingelement(v);
    cout<<ans<<endl;
}