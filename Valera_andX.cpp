#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<char>> arr(n,vector<char>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    char dig=arr[0][0],oth=arr[0][1];
    bool k=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j || i+j==n-1)
            {
                if(dig!=arr[i][j])
                {
                    k=false;
                    break;
                }
            }
            else 
            {
                if(oth!=arr[i][j])
                {
                    k=false;
                    break;
                }
            }
        }
        if(!k)
        break;
    }
    if(k && dig!=oth)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}