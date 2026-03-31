#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<string> st;
    vector<string> ans(n,"NO"); 
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        if(st.find(a)!=st.end())
        ans[i]="YES";
        else
        st.insert(a);
    }
    for(string i: ans)
    {
        cout<<i<<endl;
    }
}