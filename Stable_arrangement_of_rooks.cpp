#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int req=ceil((double)n/2);
        if(k<=req)
        {
            vector<vector<char>> arr(n,vector<char>(n,'.'));
            for(int i=0;i<n && k>0;i+=2,k--)
            {
                arr[i][i]='R';
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
        else
        cout<<-1<<endl;
    }
}