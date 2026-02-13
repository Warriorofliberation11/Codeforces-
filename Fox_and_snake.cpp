#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>> arr(n,vector<char>(m,'#'));
    bool k=true;
    for(int i=1;i<n;i+=2)
    {
        int start,end;
        if(k)
        {
            k=false;
            start=0,end=m-1;
        }
        else
        {
            k=true;
            start=1,end=m;
        }
        while(start<end)
        {
            arr[i][start]='.';
            start++;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}