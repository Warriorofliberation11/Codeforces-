#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            if(i==a)
            cnt++;
        }
        cout<<(cnt+1)/2<<endl;
    }
}