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
        string s;
        cin>>s;
        vector<int> g;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='2')
            g.push_back(i);
        }
        int m=g.size(),curr=0;
        if(m==2 || m==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        vector<vector<char>> arr(n,vector<char>(n));
        for(int i=0;i<n;i++)
        {
            bool k=true;
            for(int j=i;j<n;j++)
            {
                if(i==j)
                arr[i][j]='X';
                else if(s[i]=='1')
                {
                    arr[j][i]='=';
                    arr[i][j]='=';
                }
                else
                {
                    if(s[j]=='1')
                    {
                        arr[i][j]='=';
                        arr[j][i]='=';
                    }
                    else
                    {
                        if(k)
                        {
                            k=false;
                            arr[i][j]='+';
                            arr[j][i]='-';
                        }
                        else
                        {
                            arr[i][j]='-';
                            arr[j][i]='+';
                        }
                    }
                }
            }
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