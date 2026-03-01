#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        string s=to_string(m);
        int i=0,n=s.size();
        if((s[n-1]-'0')%2==0)
        cout<<0<<endl;
        else if((s[0]-'0')%2==0)
        cout<<1<<endl;
        else 
        {
            while(i<n)
            {
                int v=s[i]-'0';
                if(v%2==0)
                break;
                i++;
            }
            if(i==n)
            cout<<-1<<endl;
            else 
            cout<<2<<endl;
        }
    }
}