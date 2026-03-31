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
        bool k=true;
        while(n!=1 || m!=1)
        {
            if((n-1)%2==1)
            {
                n=1;
                k=!k;
            }
            else if((m-1)%2==1)
            {
                m=1;
                k=!k;
            }
            else
            break;
        }
        if(k)
        cout<<"Tonya"<<endl;
        else
        cout<<"Burenka"<<endl;
    }
}