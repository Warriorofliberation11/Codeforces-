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
        string str="1";
        bool k=true;
        int prev=(s[0]-'0')+1;
        for(int i=1;i<n;i++)
        {
            int zero=s[i]-'0';
            if(zero+1!=prev)
            {
                str+='1';
                prev=zero+1;
            }
            else
            {
                str+='0';
                prev=zero;
            }
        }
        cout<<str<<endl;
    }
}