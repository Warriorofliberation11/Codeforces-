#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,a,b;
        cin>>l>>a>>b;
        unordered_map<int,int> mp;
        int maxi=-1;
        while(mp[a]!=1)
        {
            maxi=max(maxi,a);
            mp[a]=1;
            a=(a+b)%l;
        }
        cout<<maxi<<endl;
    }
}