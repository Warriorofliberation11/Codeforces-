#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int cnt=(m>=a)?a:m;
        int rem=(m>=a)?m-a:0;
        cnt+=(m>=b)?b:m;
        rem+=(m>=b)?m-b:0;
        cnt+=(rem>=c)?c:rem;
        cout<<cnt<<endl;
    }
}