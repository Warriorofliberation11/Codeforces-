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
        string s;
        cin>>s;
        int i=n-1,first=-1,maxi=0;
        while(i>=0)
        {
            int cnt=0;
            while(i>=0 && s[i]=='0')
            {
                cnt++;
                i--;
            }
            if(first==-1)
            first=cnt;
            maxi=max(maxi,cnt);
            if(i==-1)
            maxi=max(maxi,cnt+first);
            i--;
        }
        cout<<maxi<<endl;
    }
}