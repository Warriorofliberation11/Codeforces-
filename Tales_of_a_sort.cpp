#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,maxi=0;
        cin>>n;
        int prev=-1;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(i!=0)
            {
                if(a<prev)
                maxi=max(maxi,prev);
            }
            prev=a;
        }
        cout<<maxi<<endl;
    }
}