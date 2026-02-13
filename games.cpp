#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,result=0;
    cin>>n;
    int m=n;
    vector<pair<int,int>> g;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        g.push_back({a,b});
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(g[i].second==g[j].first)
            result++;
        }
    }
    cout<<result;
}