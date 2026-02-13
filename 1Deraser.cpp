#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n,cnt=0;
        cin>>n>>k;
        string s;
        cin>>s;
        int i=0;
        while(i<n)
        {
            if(s[i]=='B')
            {
                i+=k;
                cnt++;
            }
            else
            i++;
        }
        cout<<cnt<<endl;
    }
}