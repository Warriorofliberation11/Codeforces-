#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a<b)
        cout<<1<<endl;
        else if(a==b)
        cout<<2<<endl;
        else
        {
            int bvalue=max(b,2),result=INT_MAX;
            while(bvalue<b+8)
            {
                int avalue=a,cnt=0;
                while(avalue>0)
                {
                    cnt++;
                    avalue=avalue/bvalue;
                }
                result=min(result,cnt+bvalue-b);
                bvalue++;
            }
            cout<<result<<endl;
        }
    }
}