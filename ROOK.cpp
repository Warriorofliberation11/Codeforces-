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
        char ch=s[0];
        int n=s[1]-'0';
        for(int i=1;i<=8;i++)
        {
            if(i!=n)
            cout<<ch<<i<<endl;
        }
        for(char a='a';a<='h';a++)
        {
            if(a!=ch)
            cout<<a<<n<<endl;
        }
    }
}