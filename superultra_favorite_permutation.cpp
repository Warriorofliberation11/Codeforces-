#include<bits/stdc++.h>
using namespace std;
bool com(int m)
{
    for(int i=2;i<=sqrt(m);i++)
    {
        if(m%i==0)
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> ans;
        for(int i=2;i<=n;i+=2)
        {
            ans.push_back(i);
        }
        for(int i=1;i<=n;i+=2)
        {
            if(com(i+ans.back()))
            {
                ans.push_back(i);
                break;
            }
        }
        int last=ans.back();
        if(last%2!=1)
        cout<<-1<<endl;
        else
        {
            for(int i=1;i<=n;i+=2)
            {
                if(last!=i)
                ans.push_back(i);
            }
            for(int i=0;i<n;i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
}