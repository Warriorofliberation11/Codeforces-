#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
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
        set<char> st={'1','4','6','8','9'};
        bool k=true;
        for(char i: s)
        {
            if(st.find(i)!=st.end())
            {
                cout<<1<<endl<<i<<endl;
                k=false;
                break;
            }
        }
        if(k)
        {
            for(int i=0;i<s.size();i++)
            {
                for(int j=i+1;j<s.size();j++)
                {
                    int p=(s[i]-'0')*10+(s[j]-'0');
                    if(!isprime(p))
                    {
                        cout<<2<<endl<<p<<endl;
                        k=false;
                        break;
                    }
                }
                if(!k)
                break;
            }
        }
    }
}