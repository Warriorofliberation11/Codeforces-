#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s>>t;
        if(s.size()>t.size())
        {
            string temp=s;
            s=t;
            t=temp;
        }
        int index=0;
        for(int i=0;i<s.size();i++)
        {
            if(s.substr(0,i+1)==t.substr(0,i+1))
            index=i;
        }
        cout<<s.size()+t.size()-index<<endl;
    }
}