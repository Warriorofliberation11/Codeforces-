#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        int cnt=0,inc=1;
        while(l<=r)
        {
            cnt++;
            l+=inc;
            inc++;
        }
        cout<<cnt<<endl;
    }
}