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
        int b=n/2,a=n/2-1,c=n-(a+b);
        if(b<=c)
        {
            b++;
            a=(n-b+1)/2;
            c=n-(a+b);
        }
        cout<<a<<" "<<b<<" "<<n-(a+b)<<endl;
    }
}