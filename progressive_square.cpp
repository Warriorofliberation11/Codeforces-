#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,d;
        cin>>n>>c>>d;
        vector<int> arr(n*n);
        int mini=INT_MAX;
        map<int,int> m1;
        for(int i=0;i<n*n;i++)
        {
            cin>>arr[i];
            m1[arr[i]]++;
            mini=min(mini,arr[i]);
        }
        vector<vector<int>> origin(n,vector<int>(n,0));
        map<int,int> m2;
        origin[0][0]=mini;
        for(int i=0;i<n;i++)
        {
            if(i>0)
            origin[i][0]=origin[i-1][0]+c;
            m2[origin[i][0]]++;
            for(int j=1;j<n;j++)
            {
                origin[i][j]=origin[i][j-1]+d;
                m2[origin[i][j]]++;
            }
        }
        bool p=true;
        for(int i=0;i<n*n;i++)
        {
            if(m1[arr[i]]!=m2[arr[i]])
            {
                p=false;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(p)
        cout<<"YES"<<endl;
    }
}