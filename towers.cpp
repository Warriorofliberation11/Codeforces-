#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int maxi=0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        mp[a]++;
        maxi=max(maxi,mp[a]);
    }
    cout<<maxi<<" "<<mp.size();
}