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
        int cnt=0;
        for(char i:s)
        {
            if(i=='Y')
            cnt++;
        }
        if(cnt>1)
        cout<<"NO"<<endl;
        else 
        cout<<"YES"<<endl;
    }
}