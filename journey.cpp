#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        long long sum=a+b+c;
        long long cnt=(n/sum)*3;
        n=n%sum;
        if(n>0)
        {
            n-=a;
            cnt++;
        }
        if(n>0)
        {
            n-=b;
            cnt++;
        }
        if(n>0)
        {
            n-=c;
            cnt++;
        }
        cout<<cnt<<endl;
    }
}