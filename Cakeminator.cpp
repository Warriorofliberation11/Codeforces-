#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    vector<string> arr(r);
    set<int> st;
    int row=0;
    for(int i=0;i<r;i++)
    {
        string s;
        cin>>s;
        bool straw=false;
        for(int j=0;j<c;j++)
        {
            if(s[j]=='S')
            {
                st.insert(j);
                straw=true;
            }
        }
        if(straw)
        row++;
    }
    int ans=(c-st.size())*r+(r-row)*st.size();
    cout<<ans<<endl;
}