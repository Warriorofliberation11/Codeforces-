#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt=0,i=0,range=-1;
        while(i<n)
        {
            if(s[i]=='1')
            range=i+k;
            else
            {
                if(i>range)
                cnt++;
            }
            i++;
        }
        cout<<cnt<<endl;
    }
}