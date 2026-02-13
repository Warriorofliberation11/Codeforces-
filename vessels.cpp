#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int cnt=0;
        while(a!=b)
        {
            cnt++;
            if(abs(a-b)<c*2)
            break;
            if(a>b)
            {
                a-=c;
                b+=c;
            }
            else
            {
                a+=c;
                b-=c;
            }
        }
        cout<<cnt<<endl;
    }
}