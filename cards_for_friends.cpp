#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,n;
        cin>>w>>h>>n;
        int cnt=1;
        while(w>0 && h>0)
        {
            if(w%2==0)
            {
                cnt*=2;
                w=w/2;
            }
            else if(h%2==0)
            {
                h=h/2;
                cnt*=2;
            }
            else
            break;
            if(cnt>=n)
            break;
        }
        if(cnt>=n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}