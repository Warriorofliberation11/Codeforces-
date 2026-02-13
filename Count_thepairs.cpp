#include<bits/stdc++.h>
using namespace std;
bool upper(char a)
{
    return a>=65 && a<=90;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int> mp,vis;
        for(char i:s)
        {
            mp[i]++;
        }
        int sum=0;
        for(auto it: mp)
        {
            char c=it.first,f;
            if(vis[c]==1)
            continue;
            if(upper(c))
            f=c+32;
            else
            f=c-32;
            int dusra=(mp.count(f))?mp[f]:0;
            sum+=min(mp[c],dusra);
            if(k>0)
            {
                int m=abs(dusra-mp[c])/2,ans=min(k,m);
                sum+=ans;
                k-=ans;
            }
            if(dusra!=0)
            vis[f]=1;
            vis[c]=1;
        }
        cout<<sum<<endl;
    }
}