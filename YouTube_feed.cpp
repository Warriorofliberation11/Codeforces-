#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int maxi=0,index=0;
        for(int i=0;i<n;i++)
        {
            int b;
            cin>>b;
            if(a[i]+i<=k && b>maxi)
            {
                maxi=b;
                index=i+1;
            }
        }
        if(index==0)
        cout<<-1<<endl;
        else
        cout<<index<<endl;
    }
}