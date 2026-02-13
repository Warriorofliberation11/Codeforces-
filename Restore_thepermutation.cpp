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
        set<int> st;
        for(int i=0;i<2*n;i++)
        {
            int a;
            cin>>a;
            if(st.find(a)==st.end())
            cout<<a<<" ";
            st.insert(a);
        }
        cout<<endl;
    }
}