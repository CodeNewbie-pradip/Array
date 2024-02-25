#include<iostream>
#include<vector>
/*
---------------                     ----------------
| 10 | 20 | 30|                     | 10 | 40 | 70 |
---------------                     ----------------
| 40 | 50 | 60|  Transpose Matrix   | 20 | 50 | 80 |
---------------                     ----------------
| 70 | 80 | 90|                     | 30 | 60 | 90 |
---------------                     ----------------
*/

using namespace std;

int main()
{
    int row=3;
    int col=3;
    vector<vector<int>>matrix(row, vector<int>(col));

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"Before Transpose : "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"after Transpose : "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=i; j<col; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}