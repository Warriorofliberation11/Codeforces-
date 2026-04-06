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
        if(n>30)
        {
            cout<<"YES"<<endl;
            int a=6,b=10,c=14,d=n-(a+b+c);
            if(d==a || d==b || d==c)
            {
                c=15;
                d--;
            }
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl; 
        }
        else
        cout<<"NO"<<endl;
    }
}