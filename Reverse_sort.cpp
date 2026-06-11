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
        string s;
        cin>>s;
        set<int> st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            st.insert(i+1);
        }
        int m=st.size();
        for(int i=n-1;i>=n-m;i--)
        {
            if(s[i]=='0')
            st.insert(i+1);
            else
            st.erase(i+1);
        }
        if(st.size()==0)
        cout<<0<<endl;
        else
        {
            cout<<1<<endl;
            cout<<st.size()<<" ";
            vector<int> arr;
            for(int it: st)
            arr.push_back(it);
            sort(arr.begin(),arr.end());
            for(int it: arr)
            cout<<it<<" ";
            cout<<endl;
        }
    }
}