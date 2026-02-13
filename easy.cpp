#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,result=0;
        cin>>n;
        for(int i=1;i<=n/2;i++)
        {
            if(i==n-i)
            result++;
            else
            result+=2;
        }
        cout<<result<<endl;
    }
}