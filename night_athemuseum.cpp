#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char ch='a';
    int total=0;
    for(int i=0;i<s.size();i++)
    {
        total+=min((ch-s[i]+26)%26,(s[i]-ch+26)%26);
        ch=s[i];
    }
    cout<<total<<endl;
}