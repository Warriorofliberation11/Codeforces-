#include<bits/stdc++.h>
using namespace std;
int sumdigits(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n=n/10;
    }
    return s;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int cnt=0;
        for(int i=x;i<=x+90;i++)
        {
            if(i-sumdigits(i)==x)
            cnt++;
        }
        cout<<cnt<<endl;
    }
}