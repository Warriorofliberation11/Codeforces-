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
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[abs(a)]++;
        }
        int cnt=0;
        for(auto it: mp)
        {
            if(it.first==0)
            cnt++;
            else if(it.second==1)
            cnt++;
            else
            cnt+=2;
        }
        cout<<cnt<<endl;
    }
}