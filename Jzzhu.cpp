#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    queue<pair<int,int>> q;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        q.push({a,i});
    }
    while(q.size()!=1)
    {
        int val=q.front().first;
        int index=q.front().second;
        q.pop();
        if(val>m)
        q.push({val-m,index});
    }
    cout<<q.front().second;
}