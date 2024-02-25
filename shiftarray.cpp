#include<iostream>
#include<vector>
using namespace std;
/*
-------------------------------
| 10 | 20 | 30 | 40 | 50 | 60 |
-------------------------------
shiftbyTwo
-------------------------------
| 60 | 10 | 20 | 30 | 40 | 50 |
-------------------------------
*/
//using reveser function
void reverse(vector<int>&num, int start, int end)
{
    while(start<end)
    {
        swap(num[start], num[end]);
        start++;
        end--;
    }
}
void ShiftArrayRev(vector<int>& nums)
{
    int k=2;
    int size=nums.size()-1;
    //| 50 | 40 | 30 | 20 | 10|
    reverse(nums, 0, size);
    //first two swap
    //| 40 | 50 | 30 | 20 | 10|
    reverse(nums, 0, k-1);
    //upto k reverse array
    //| 40 | 50 | 10 | 20 | 30 |
    reverse(nums, k, size);

}

//using swap method
void ShiftArray(vector<int>& nums)
{
    int size=nums.size();
    vector<int>temp{nums[size-2], nums[size-1]};
    for(int i=size-1; i>1; i--)
    {
        nums[i]=nums[i-2];
    }
    nums.insert(nums.begin(), temp.begin(), temp.end());


}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    //ShiftArray(v);
    ShiftArrayRev(v);
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
}