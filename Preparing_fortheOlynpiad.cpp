#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        int res=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>b[i+1])
            res+=(a[i]-b[i+1]);
        }
        res+=a[n-1];
        cout<<res<<endl;
    }
}