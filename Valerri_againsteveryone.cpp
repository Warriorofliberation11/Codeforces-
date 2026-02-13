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
        unordered_map<int,int> mp;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            mp[a]++;
        }
        bool p=false;
        for(auto it: mp)
        {
            if(it.second>1)
            {
                p=true;
                break;
            }
        }
        if(p)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}