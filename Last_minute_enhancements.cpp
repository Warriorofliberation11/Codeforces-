#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        set<int> st;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(st.find(a)==st.end())
            {
                st.insert(a);
                cnt++;
            }
            else if(st.find(a+1)==st.end())
            {
                st.insert(a+1);
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}