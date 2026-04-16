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
        int cnt=0;
        while(l<=r-2)
        {
            if(l&1)
            {
                cnt++;
                l+=3;
            }
            l++;
        }
        cout<<cnt<<endl;
    }
}