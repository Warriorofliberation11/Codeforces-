#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,a,b;
        cin>>n>>a>>b;
        cout<<min(n*a,min(((n+2)/3)*b,(n/3)*b+(n%3)*a))<<endl;
    }
}