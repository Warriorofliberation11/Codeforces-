#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2;
        int i=1,j=1,cnt1=0,cnt2=0;
        while(i<n)
        {
            if(s1[i]==s1[i-1])
            cnt1++;
            i++;
        }
        while(j<m)
        {
            if(s2[j]==s2[j-1])
            cnt2++;
            j++;
        }
        if(cnt1>1 || cnt2>1 || (cnt1==1 && cnt2==1))
        cout<<"NO"<<endl;
        else if(cnt1==0 && cnt2==0)
        cout<<"YES"<<endl;
        else
        {
           if(s1[n-1]!=s2[m-1])
           cout<<"YES"<<endl;
           else
           cout<<"NO"<<endl;
        }
    }
}