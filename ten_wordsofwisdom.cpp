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
        int maxi=0,index=-1;
        for(int i=1;i<=n;i++)
        {
            int a,b;
            cin>>a>>b;
            if(a<=10 && b>maxi)
            {
                maxi=b;
                index=i;
            }
        }
        cout<<index<<endl;
    }
}