#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
----------------          ----------------             ----------------
| 10 | 20 | 30 |          | 10 | 40 | 70 |             | 70 | 40 | 10 |
----------------  Rotate  ----------------             ----------------
| 40 | 50 | 60 |  Matrix  | 20 | 50 | 80 |  Reverse    | 80 | 50 | 20 |
----------------          ----------------  Matrix[i]  ----------------
| 70 | 80 | 90 |          | 30 | 60 | 90 |             | 90 | 60 | 30 |
----------------          ----------------             ----------------
*/
void AntiClockWiseRotate(vector<vector<int>>& matrix, int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=1; j<col; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i=0; i<row; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
int main()
{
    int row=3, col=3;

    vector<vector<int>>matrix(row, vector<int>(col));

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>matrix[i][j];
        }
    }

    AntiClockWiseRotate(matrix, row, col);

    cout<<"Anti ClockWise Rotate Matrix "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}