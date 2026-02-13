#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(3));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    bool k=true;
    for(int i=0;i<3;i++)
    {
        int total=0;
        for(int j=0;j<n;j++)
        {
            total+=arr[j][i];
        }
        if(total!=0)
        {
            k=false;
            break;
        }
    }
    if(k)
    cout<<"YES";
    else
    cout<<"NO";
}