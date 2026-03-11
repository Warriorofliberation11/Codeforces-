#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    set<int> st;
    vector<int> g;
    for(int i=n-1;i>=0;i--)
    {
        if(st.find(arr[i])==st.end())
        {
            st.insert(arr[i]);
            g.push_back(arr[i]);
        }
    }
    reverse(g.begin(),g.end());
    cout<<g.size()<<endl;
    for(int it: g)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}