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
        int n=s.size();
        for(int i=0;i<n;)
        {
            int j=i;
            while(j<n && s[j]==s[i])
            j++;
            if((j-i)%2==1)
            st.insert(s[i]);
            i=j;
        }
        for(char it: st)
        {
            cout<<it;
        }
        cout<<endl;
    }
}