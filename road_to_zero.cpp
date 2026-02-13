#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  x,y;
        cin>>x>>y;
        long long a,b;
        cin>>a>>b;
        if(x==0 || y==0)
        {
            cout<<abs(y-x)*a<<endl;
        }
        else if((x>0 && y>0) || (x<0 && y<0))
        {
            cout<<min(abs(x)*a+abs(y)*a,abs(min(y,x))*b+abs(y-x)*a)<<endl;;
        }
        else
        {
            cout<<(abs(x)+abs(y))*a<<endl;
        }
    }
}