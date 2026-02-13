#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int each=n/k;
        if(m<=each)
        cout<<m<<endl;
        else
        cout<<each-ceil(float(m-each)/(k-1))<<endl;
    }
}