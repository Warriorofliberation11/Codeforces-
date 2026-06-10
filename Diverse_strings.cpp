#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        bool k=true;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]!=s[i-1]+1)
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