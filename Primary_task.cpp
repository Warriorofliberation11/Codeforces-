#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        string s=to_string(a);
        if(s[0]=='1' && s[1]=='0' && s[2]!='0')
        {
            int last=0;
            for(int i=2;i<s.size();i++)
            {
                last=last*10+(s[i]-'0');
            }
            if(last>=2)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}