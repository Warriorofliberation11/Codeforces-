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
        int k;
        cin>>k;
        bool check=true;
        for(int i=1;i<n;i++)
        {
            int a;
            cin>>a;
            if(a%k!=0)
            check=false;
        }
        cout<<(check?"YES":"NO")<<endl;
    }
}