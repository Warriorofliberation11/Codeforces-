#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ones=0;
    for(char i:s)
    {
        if(i=='1')
        ones++;
    }
    if(ones<=1)
    cout<<s.size()/2<<endl;
    else
    cout<<(s.size()+1)/2<<endl;
}