#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    int result=0;
    for(char i:s)
    {
        if(i=='1')
        result+=a1;
        else if(i=='2')
        result+=a2;
        else if(i=='3')
        result+=a3;
        else
        result+=a4;
    }
    cout<<result;
}