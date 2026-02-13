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
        int n=s.size();
        bool k=false;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
            k=true;
        }
        if(k)
        cout<<1<<endl;
        else
        cout<<n<<endl;
    }
}