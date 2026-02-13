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
        if(s.size()%2==1)
        cout<<"NO"<<endl;
        else
        {
            int a=s.size()/2;
            string s1=s.substr(0,a);
            string s2=s.substr(a,s.size());
            if(s1==s2)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}