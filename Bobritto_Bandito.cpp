#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        bool k=true;
        int left=0,right=0;
        while(m--)
        {
            if(k)
            left--;
            else
            right++;
            k=!k;
        }
        if(left<l)
        {
            right+=(l-left);
            left=l;
        }
        else if(right>r)
        {
            left-=(right-r);
            right=r;
        }
        cout<<left<<" "<<right<<endl;
    }
}