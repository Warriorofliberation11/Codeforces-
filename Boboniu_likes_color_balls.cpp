#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,g,b,w;
        cin>>r>>g>>b>>w;
        int odd=0,zero=0;
        if(r%2==1)
        odd++;
        else
        {
            if(r==0)
            zero++;
        }
        if(g%2==1)
        odd++;
        else
        {
            if(g==0)
            zero++;
        }
        if(b%2==1)
        odd++;
        else
        {
            if(b==0)
            zero++;
        }
        if(w%2==1)
        odd++;
        if(odd<=1 || odd==4 || (odd==3 && zero==0))
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
    }
}