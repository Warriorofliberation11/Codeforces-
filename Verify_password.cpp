#include<bits/stdc++.h>
using namespace std;
bool isdigit(char a)
{
    return a>=48 && a<=57;
}
bool ischar(char a)
{
    return a>=97 && a<=122;
}
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
        bool k=true;
        for(int i=1;i<n;i++)
        {
            bool d1=isdigit(s[i-1]),d2=isdigit(s[i]),c1=ischar(s[i-1]),c2=ischar(s[i]);
            if((((d1 && d2) || (c1&& c2)) && s[i]<s[i-1]) ||c1 && d2)
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