#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    while(a*2>b || a*4>c)
    {
        a--;
    }
    cout<<a+a*2+a*4<<endl;
}