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
        int a=0,b=0,c=0;
        for(char i:s)
        {
            if(i=='A')
            a++;
            else if(i=='B')
            b++;
            else
            c++;
        }
        if(a+c==b)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}