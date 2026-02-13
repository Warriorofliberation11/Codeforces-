#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0,res=0;
    for(char i:s)
    {
        if(i=='x')
        cnt++;
        else
        cnt=0;
        if(cnt==3)
        {
            res++;
            cnt--;
        }
    }
    cout<<res<<endl;
}