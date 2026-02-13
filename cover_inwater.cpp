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
        int cnt=0,one=0,two=0;
        bool p=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            cnt++;
            else
            {
                if(cnt>=3)
                p=true;
                else if(cnt==2)
                two++;
                else 
                {
                    if(cnt==1)
                    one++;
                }
                cnt=0;
            }
        }
        if(cnt>=3)
        p=true;
        else if(cnt==2)
        two++;
        else 
        {
            if(cnt==1)
            one++;
        }
        if(p)
        cout<<2<<endl;
        else
        cout<<2*two+one<<endl;
    }
}