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
        cout<<min(n*a,(n/2)*b+(n%2)*a)<<endl;
    }
}