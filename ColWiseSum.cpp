#include<iostream>
#include<vector>
using namespace std;

int ColWiseSum(vector<vector<int>>matrix, int row, int col)
{
    for(int i=0; i<row; i++)
    {
        int CSum=0;
        for(int j=0; j<col; j++)
        {
            CSum+=matrix[j][i];
        }
        cout<<"Column is "<<i<<" "<<CSum<<endl;
    }
}

int main()
{
    int row=3; int col=3;
    vector<vector<int>>matrix(row, vector<int>(col));

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>matrix[i][j];
        }
    }
    ColWiseSum(matrix, row, col);
}