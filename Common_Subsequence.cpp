#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,val;
        cin>>m>>n;
        bool k=false;
        set<int> st;
        for(int i=0;i<m;i++)
        {
            int a;
            cin>>a;
            st.insert(a);
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(st.find(a)!=st.end())
            {
                k=true;
                val=a;
            }
        }
        if(k)
        {
            cout<<"YES"<<endl;
            cout<<1<<" "<<val<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}