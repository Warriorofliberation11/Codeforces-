#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> arr(n);
        int row1=-1,col1=-1,row2=-1,col2=-1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i][j]=='*')
                {
                    if(row1==-1)
                    {
                        row1=i;
                        col1=j;
                    }
                    else
                    {
                        row2=i;
                        col2=j;
                    }
                }
            }
            if(row1!=-1 && col1!=-1 && row2!=-1 && col2!=-1)
            break;
        }
        if(row1==row2)
        {
            if(row1==n-1)
            {
                arr[row1-1][col1]='*';
                arr[row2-1][col2]='*';
            }
            else
            {
                arr[row1+1][col1]='*';
                arr[row2+1][col2]='*';
            }
        }
        else if(col1==col2)
        {
            if(col1==n-1)
            {
                arr[row1][col1-1]='*';
                arr[row2][col2-1]='*';
            }
            else
            {
                arr[row1][col1+1]='*';
                arr[row2][col2+1]='*';
            }
        }
        else
        {
            arr[row1][col2]='*';
            arr[row2][col1]='*';
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
}