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
        unordered_map<int,vector<int>> mp;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            mp[a].push_back(i);
        }
        bool check=false;
        for(int i=1;i<=n;i++)
        {
            for(int it: mp[i])
            {
                if(it>=i)
                {
                    check=true;
                    break;
                }
            }
            if(check)
            break;
        }
        if(check)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}