#include<iostream>
#include<vector>

using namespace std;

bool findElement(vector<vector<int>> matrix, int row, int col, int target)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(matrix[i][j]==target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int col=3;
    int row=3;
    vector<vector<int>>matrix(row, vector<int>(col));

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>matrix[i][j];
        }
    }

    cout<<"Enter Target-> "<<endl;
    int target; cin>>target;

    int ans=findElement(matrix, row, col, target);

    if(ans==1)
    {
        cout<<"Element is Present in matrix"<<endl;
    }
    else{
        cout<<"Element is not Present in matrix"<<endl;
    }
}