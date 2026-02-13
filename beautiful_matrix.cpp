#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr(5,vector<int>(5));
    int row,column;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                row=i;
                column=j;
            }
        }
    }
    cout<<abs(row-2)+abs(column-2);;
}