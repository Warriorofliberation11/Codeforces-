#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int neg=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a==0)
            cnt++;
            else if(a<0)
            neg++;
        }
        if(neg%2==1)
        cnt+=2;
        cout<<cnt<<endl;
    }
}