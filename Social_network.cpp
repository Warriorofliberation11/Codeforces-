#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    deque<int> ans;
    set<int> st;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(st.find(a)==st.end())
        {
            ans.push_front(a);
            st.insert(a);
            if(ans.size()>k)
            {
                int a=ans.back();
                ans.pop_back();
                st.erase(a);
            }
        }
    }
    cout<<ans.size()<<endl;
    for(int i: ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}