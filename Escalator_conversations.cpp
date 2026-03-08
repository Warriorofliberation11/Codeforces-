#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,H,cnt=0;
        cin>>n>>m>>k>>H;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            int v=abs(a-H);
            if(v!=0 && v%k==0 && v/k<=m-1)
            cnt++;
        }
        cout<<cnt<<endl;
    }
}