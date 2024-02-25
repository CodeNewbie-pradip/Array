#include<iostream>
#include<vector>
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

    cout<<"Matrix print right form: "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matrix Print column wise: "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }
}