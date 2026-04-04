#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if((n-a)%2==0)
        {
            if((n-b)%2==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        {
            if((n-b)%2==0)
            {
                if(a>b)
                cout<<"NO"<<endl;
                else
                cout<<"YES"<<endl;
            }
            else
            cout<<"NO"<<endl;
        }
    }
}