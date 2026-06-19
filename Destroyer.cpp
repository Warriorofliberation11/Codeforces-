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
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            maxi=max(maxi,a);
            mp[a]++;
        }
        bool k=true;
        for(int i=0;i<=maxi;i++)
        {
            if(mp[i]==0 || (i>0 && mp[i]>mp[i-1]))
            {
                k=false;
                break;
            }
        }
        cout<<(k?"YES":"NO")<<endl;
    }
}