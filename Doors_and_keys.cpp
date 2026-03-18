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
        bool r=false,g=false,b=false,k=true;
        for(char it: s)
        {
            if(it=='r')
            r=true;
            else if(it=='b')
            b=true;
            else if(it=='g')
            g=true;
            else if((it=='R' && !r) || (it=='B' && !b) || (it=='G' && !g))
            {
                k=false;
                break;
            }   
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}