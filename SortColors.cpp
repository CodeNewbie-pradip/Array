#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
Example 1:
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Example 2:
Input: nums = [2,0,1]
Output: [0,1,2]
*/

//approach swapping
void SortColorsSwap(vector<int>& nums)
{
    int size=nums.size();
    int index=0;
    int left=0; 
    int right=size-1;

    while(index <= right)
    {
        if(nums[index]==0)
        {
            swap(nums[index], nums[left]);
            left++;
            index++;
        }
        else if(nums[index]==2)
        {
            swap(nums[index], nums[right]);
            right--;
            index++;
        }
        else
        {
            index++;
        }

        for(int j=0; j<size; j++){
            cout<<nums[j]<<" ";
        }
        cout<<endl;
    }
}

//approach count
void SortColorsCount(vector<int>& nums)
{
     int ZeroCount=0;
     int OnesCount=0;
     int TwoCount=0;
     int index=0;
     int size=nums.size();

     for(int i=0; i<size; i++)
     {
        if(nums[i]==0)
        {
            ZeroCount++;
        }
        else if(nums[i]==1)
        {
            OnesCount++;
        }
        else
        {
            TwoCount++;
        }
     }
     
     for(int j=0; j<size; j++)
     {
        if(ZeroCount>0)
        {
            nums[j]=0;
            ZeroCount--;
        }
        else if(OnesCount>0)
        {
            nums[j]=1;
            OnesCount--;
        }
        else
        {
            nums[j]=2;
            TwoCount--;
        }
     }
}

void buublesort(vector<int>& nums)
{
    int size=nums.size();
    for(int i=0; i<size; i++)
    {
        for(int j=i; j<size; j++)
        {
            if(nums[i]>nums[j])
            {
                swap(nums[i], nums[j]);
            }
        }
    }
}

int main()
{
    int n=6;
    vector<int>nums(n);
    for(int i=0; i<n; i++)
    {
        cin>>nums[i];
    }
    // SortColorsSwap(nums);

    // for(int j=0; j<n; j++)
    // {
    //     cout<<nums[j]<<" ";
    // }

    SortColorsCount(nums);
    for(int i=0; i<n; i++)
    {
        cout<<nums[i]<<" ";
    }
}