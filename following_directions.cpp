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
        int x=0,y=0;
        bool k=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='U')
            y++;
            else if(s[i]=='D')
            y--;
            else if(s[i]=='L')
            x--;
            else
            x++;
            if(x==1 && y==1)
            {
                k=true;
                break;
            }
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}