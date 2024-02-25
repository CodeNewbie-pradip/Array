//dignonal print
#include<iostream>
#include<vector>

using namespace std;

int RowWiseSum(vector<vector<int>> matrix, int row, int col)
{
    for(int i=0; i<row; i++)
    {
        int RSum=0;
        for(int j=0; j<col; j++)
        {
            RSum+=matrix[j][i];
        }
        cout<<"Sum of "<<i<<" is "<<RSum<<endl;
    }
    return 0;
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
    RowWiseSum(matrix, row, col);

    return 0;
}