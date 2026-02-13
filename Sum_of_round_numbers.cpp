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
        vector<int> g;
        int cnt=0;
        while(n>0)
        {
            int r=(n%10)*pow(10,cnt);
            if(r!=0)
            g.push_back(r);
            cnt++;
            n=n/10;
        }
        cout<<g.size()<<endl;
        for(int i=0;i<g.size();i++)
        {
            cout<<g[i]<<" ";
        }
        cout<<endl;
    }
}