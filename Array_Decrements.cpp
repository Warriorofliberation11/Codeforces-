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
        int maxdiff=0;
        vector<int> a(n),b(n);
        bool k=true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            maxdiff=max(maxdiff,a[i]-b[i]);
        }
        for(int i=0;i<n;i++)
        {
            int v=a[i]-maxdiff;
            if(a[i]<b[i] || (b[i]!=0 && b[i]>v))
            {
                k=false;
                break;
            }
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}