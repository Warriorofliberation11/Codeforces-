#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> g;
    set<int> st;
    for(int i=2;i<=n;i++)
    {
        if(isprime(i))
        {
            g.push_back(i);
            st.insert(i);
        }
    }
    int cnt=0;
    for(int i=1;i<g.size();i++)
    {
        if(st.find(g[i]+g[i-1]+1)!=st.end())
        cnt++;
        if(cnt==k)
        break;
    }
    if(k==cnt)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}