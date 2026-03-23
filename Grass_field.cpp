#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int cnt=0;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                int a;
                cin>>a;
                if(a==1)
                cnt++;
            }
        }
        if(cnt==0)
        cout<<0<<endl;
        else if(cnt<4)
        cout<<1<<endl;
        else
        cout<<2<<endl;
    }
}