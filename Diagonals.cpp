#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,cnt=0;
        cin>>n>>k;
        if(n*n<=k)
        {
            cout<<2*n-1<<endl;
            continue;
        }
        if(k>0)
        cnt++;
        k-=n;
        n--;
        while(k>0)
        {
            cnt++;
            k-=n;
            if(k>0)
            {
                k-=n;
                cnt++;
            }
            n--;
        }
        cout<<cnt<<endl;
    }
}