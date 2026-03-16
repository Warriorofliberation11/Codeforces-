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
        set<int> st1,st2;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            st1.insert(a);
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            st2.insert(a);
        }
        if(st1.size()+st2.size()<4)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}