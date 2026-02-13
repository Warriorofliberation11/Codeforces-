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
        int num=0;
        for(char i:s)
        {
            num=(num*10)+(i-'0');
        }
        int a=sqrt(num);
        if(a*a==num)
        cout<<0<<" "<<a<<endl;
        else
        cout<<-1<<endl;
    }
}