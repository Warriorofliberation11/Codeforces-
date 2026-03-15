#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int z=0,o=0;
        for(char it: s)
        {
            if(it=='0')
            z++;
            else
            o++;
        }
        if(z==0 || o==0)
        cout<<0<<endl;
        else if(z!=o)
        cout<<min(z,o)<<endl;
        else
        cout<<z-1<<endl;
    }
}