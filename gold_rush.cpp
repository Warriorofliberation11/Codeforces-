#include<bits/stdc++.h>
using namespace std;
bool find(int &m,int n)
{
    if(n==m)
    return true;
    if(n<2 || n%3!=0)
    return false;
    int a=n/3,b=a*2;
    return find(m,a) || find(m,b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>n>>m;
        if(find(m,n))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}