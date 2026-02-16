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
        long long sum=0;
        set<int> st;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            sum+=a;
            st.insert(a);
        }
        if(sum%3==0)
        cout<<0<<endl;
        else if(sum%3==2)
        cout<<1<<endl;
        else
        { 
            bool k=false;
            for(auto it: st)
            {
                if((sum-it)%3==0)
                k=true;
            }
            if(k)
            cout<<1<<endl;
            else
            cout<<2<<endl;
        }
    }
}