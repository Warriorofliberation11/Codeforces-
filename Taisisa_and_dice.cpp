#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,r;
        cin>>n>>s>>r;
        vector<int> ans;
        ans.push_back(s-r);
        n--;
        while(n>0)
        {
            int a=r/n;
            ans.push_back(a);
            r-=a;
            n--;
        }
        for(int it: ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}