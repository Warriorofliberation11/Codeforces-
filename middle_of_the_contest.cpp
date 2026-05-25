#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int h1=(s1[0]-'0')*10+(s1[1]-'0'),m1=(s1[3]-'0')*10+(s1[4]-'0');
    int h2=(s2[0]-'0')*10+(s2[1]-'0'),m2=(s2[3]-'0')*10+(s2[4]-'0');
    int ans=((h2+h1)*60+m2+m1)/2;
    string h3=to_string(ans/60),m3=to_string(ans%60);
    if(h3.size()==1)
    h3='0'+h3;
    if(m3.size()==1)
    m3='0'+m3;
    cout<<h3<<":"<<m3;
}