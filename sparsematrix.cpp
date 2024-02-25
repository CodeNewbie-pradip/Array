#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix(3, vector<int>(3));
    cout<<"Input for matrix "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"\nput input for index row "<<i<<" column is "<<j<<"-> ";
            cin>>matrix[i][j];
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"\npresent element at index row "<<i<<" column is "<<j<<"-> "<<matrix[i][j];
        }
    }

}