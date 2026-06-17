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
        if(mp[maxi]!=n)
        cout<<1<<endl;
        else
        cout<<n<<endl;
    }
}