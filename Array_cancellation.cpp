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
        long long maxi=0,total=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            total+=a;
            if(total<0)
            maxi=max(maxi,abs(total));
        }
        cout<<maxi<<endl;
    }
}