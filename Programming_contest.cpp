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
        int i=n-1,cnt=0;
        while(i>=0)
        {
            bool k=true;
            while(i>=0 && s[i]=='0')
            i--;
            if(i==-1)
            break;
            if(i==n-1)
            {
                cnt+=1;
                k=false;
            }
            while(i>=0 && s[i]=='1')
            i--;
            if(k)
            cnt+=2;
        }
        cout<<cnt<<endl;
    }
}