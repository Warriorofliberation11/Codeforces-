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
        int start=0,end=INT_MAX;
        set<int> st;
        for(int i=0;i<n;i++)
        {
            int a,x;
            cin>>a>>x;
            if(a==1)
            start=max(start,x);
            else if(a==2)
            end=min(end,x);
            else
            st.insert(x);
        }
        int ans=max(0,end-start+1);
        for(int it: st)
        {
            if(it>=start &&  it<=end)
            ans--;
        }
        cout<<ans<<endl;
    }
}