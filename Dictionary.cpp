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
        int sum=(s[0]-'a')*25+(s[1]-'a'+1);
        if(s[1]>s[0])
        sum--;
        cout<<sum<<endl;
    }
}