#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<pair<int,int>,int> mp;
    int maxclients=0;
    for(int i=0;i<n;i++)
    {
        int h,m;
        cin>>h>>m;
        mp[{h,m}]++;
        maxclients=max(maxclients,mp[{h,m}]);
    }
    cout<<maxclients;
}