#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int left=-1,right=-1,ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(s[i]=='L')
        {
            if(left==-1)
            left=a;
            else
            left=max(left,a);
        }
        else
        {
            if(right==-1)
            right=a;
            else
            right=max(right,a);
        }
        if(left!=-1 && right!=-1 && left>=right)
        ans=min(ans,(left-right)/2);
    }
    if(ans!=INT_MAX)
    cout<<ans<<endl;
    else
    cout<<-1<<endl;
}