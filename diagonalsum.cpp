#include<iostream>
#include<vector>

using namespace std;

int SumDiagonal(vector<vector<int>>matrix, int row, int& CSum)
{
    for(int  i=0; i<row; i++)
    {
        CSum+=matrix[i][i];
    }
    return CSum;
}
void PrintDiag(vector<vector<int>>matrix, int row, int col)
{
    for(int i=0; i<row; i++)
    {
        cout<<matrix[i][i]<<" ";
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
    int CSum=0;
    SumDiagonal(matrix, row, CSum);
    cout<<CSum<<endl;
    PrintDiag(matrix, row, col);
}