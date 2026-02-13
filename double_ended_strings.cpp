#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        int m=a.size(),n=b.size();
        int longest=0;
        for(int i=0;i<a.size();i++)
        {
            for(int j=i;j<a.size();j++)
            {
                string temp=a.substr(i,j-i+1);
                if(b.find(temp)!=string::npos)
                {
                    longest=max(longest,j-i+1);
                }
            }
        }
        cout<<m+n-2*longest<<endl;
    }
}