#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        set<int> st;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(i<k)
            st.insert(a);
        }
        if(k==n)
        {
            cout<<0<<endl;
            continue;
        }
        int cnt=0;
        for(int i=1;i<=k;i++)
        {
            if(st.find(i)==st.end())
            cnt++;
        }
        cout<<cnt<<endl;
    }
}