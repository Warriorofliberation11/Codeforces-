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
        int i=0,cnt=0,prev=INT_MIN;
        while(i<n)
        {
            if(s[i]=='1')
            {
                if(prev==INT_MIN || i-prev>k-1)
                cnt++;
                prev=i;
            }
            i++;
        }
        cout<<cnt<<endl;
    }
}