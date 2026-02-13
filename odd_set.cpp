#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,odd=0;
        cin>>n;
        for(int i=0;i<2*n;i++)
        {
            int a;
            cin>>a;
            odd+=a%2;
        }
        if(odd==n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}