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
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[a]++;
            maxi=max(maxi,a);
        }
        cout<<mp[maxi]<<endl;
    }
}