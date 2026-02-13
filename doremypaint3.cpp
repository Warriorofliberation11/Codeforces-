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
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[a]++;
        }
        if(mp.size()==1)
        cout<<"YES"<<endl;
        else if(mp.size()>2)
        cout<<"NO"<<endl;
        else
        {
            int a=0,b=0;
            for(auto it:mp)
            {
                if(a==0)
                a=it.second;
                else
                b=it.second;
            }
            if((n%2==1 && abs(a-b)==1) ||(n%2==0 && abs(a-b)==0))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}