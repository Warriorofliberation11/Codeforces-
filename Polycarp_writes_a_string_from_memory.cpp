#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        set<char> st;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(st.find(s[i])==st.end())
            {
                if(st.size()==3)
                {
                    cnt++;
                    st.clear();
                }
                st.insert(s[i]);
            }
        }
        if(st.size())
        cnt++;
        cout<<cnt<<endl;
    }
}