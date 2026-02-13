#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,p;
        cin>>n>>k>>p;
        k=abs(k);
        if(n*p<k)
        cout<<-1<<endl;
        else
        cout<<(k+p-1)/p<<endl;
    }
}