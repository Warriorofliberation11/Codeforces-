#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
   cin>>t;
   while(t--)
   {
        int n,m;
        cin>>n>>m;
        if(n==1 && m==1)
        cout<<0<<endl;
        else if(n==1)
        cout<<m<<endl;
        else if(m==1)
        cout<<n<<endl;
        else
        cout<<2*min(m,n)+max(m,n)-2<<endl;
   }
}