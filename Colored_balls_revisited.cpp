#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,maxi=INT_MIN,index=-1;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            if(maxi<a)
            {
                maxi=a;
                index=i;
            }
        }
        cout<<index<<endl;
    }
}