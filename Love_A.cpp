#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=0;
    for(char i: s)
    {
        if(i=='a')
        a++;
    }
    if(a>s.size()/2)
    cout<<s.size()<<endl;
    else
    cout<<2*a-1<<endl;
}