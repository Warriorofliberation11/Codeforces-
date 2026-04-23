#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,maxi=INT_MIN;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(i%2==0)
            maxi=max(maxi,a);
        }
        cout<<maxi<<endl;
    }
}