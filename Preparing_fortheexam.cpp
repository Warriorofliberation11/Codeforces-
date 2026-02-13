#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        unordered_map<int,int> mp;
        for(int i=1;i<=n;i++)
        {
            mp[i]=1;
        }
        vector<int> arr(m);
        for(int i=0;i<m;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<k;i++)
        {
            int a;
            cin>>a;
            mp.erase(a);
        }
        string str="";
        for(int i=0;i<m;i++)
        {
            bool k=false;
            if(mp.count(arr[i]))
            {
                mp.erase(arr[i]);
                k=true;
            }
            if(mp.empty())
            str+='1';
            else
            str+='0';
            if(k)
            mp[arr[i]]=1;
        }
        cout<<str<<endl;
    }
}