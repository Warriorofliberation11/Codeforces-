#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }
    long long cnt=min(mp[1],mp[3]);
    mp[1]-=cnt;
    mp[3]-=cnt;
    cnt+=mp[4];
    cnt+=(mp[2]/2);
    if(mp[2]%2==1)
    {
        cnt++;
        mp[1]-=2;
    }
    if(mp[1]>0)
    cnt+=(mp[1]+3)/4;
    if(mp[3]>0)
    cnt+=mp[3];
    cout<<cnt<<endl;
}