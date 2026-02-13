#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        vector<int> alp(26,0);
        bool k=true;
        for(int i=0;i<n;i++)
        {
            if(alp[s[i]-'A']!=0 && s[i-1]!=s[i])
            {
                k=false;
                cout<<"NO"<<endl;
                break;
            }
            alp[s[i]-'A']++;
        }
        if(k)
        cout<<"YES"<<endl;
    }
}