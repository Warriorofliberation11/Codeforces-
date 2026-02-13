#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,odd=0,even=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a%2==1)
            odd++;
            else
            even++;
            sum+=a;
        }
        if(sum%2==1)
        cout<<"YES"<<endl;
        else
        {
            if(odd==n ||even==n)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
    }
}