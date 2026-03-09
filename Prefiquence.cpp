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
        string a,b;
        cin>>a>>b;
        int k=0,i=0;
        while(k<n && i<m)
        {
            while(i<m && a[k]!=b[i])
            i++;
            if(i!=m)
            {
                i++;
                k++;
            }
        }
        cout<<k<<endl;
    }
}