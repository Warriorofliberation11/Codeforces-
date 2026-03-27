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
        stack<int> st;
        bool zero=false;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a<0)
            st.push(i);
            else if(a==0)
            zero=true;
        }
        if(zero)
        cout<<0<<endl;
        else if(st.size()%2==1)
        cout<<0<<endl;
        else
        {
            cout<<1<<endl;
            if(st.size()==0)
            cout<<1<<" "<<0<<endl;
            else
            cout<<st.top()<<" "<<0<<endl;
        }
    }
}