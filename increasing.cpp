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
        bool k=true;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[a]++;
            if(mp[a]>1)
            k=false;
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}