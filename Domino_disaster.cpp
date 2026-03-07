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
        string s;
        cin>>s;
        for(char &i:s)
        {
            if(i=='U')
            i='D';
            else if(i=='D')
            i='U';
        }
        cout<<s<<endl;
    }
}