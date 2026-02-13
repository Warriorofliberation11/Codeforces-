#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    set<int> st;
    for(int i=0;i<p;i++)
    {
        int a;
        cin>>a;
        st.insert(a);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int a;
        cin>>a;
        st.insert(a);
    }
    if(st.size()==n)
    cout<<"I become the guy.";
    else
    cout<<"Oh, my keyboard!";
}