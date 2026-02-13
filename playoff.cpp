#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        vector<int> g;
        g.push_back(s1);
        g.push_back(s2);
        g.push_back(s3);
        g.push_back(s4);
        sort(g.begin(),g.end());
        int first=g[3],second=g[2];
        int e1=max(s1,s2),e2=max(s3,s4);
        if(first!=e1 &&  first !=e2)
        cout<<"NO"<<endl;
        else if(second!=e1 && second!=e2)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}