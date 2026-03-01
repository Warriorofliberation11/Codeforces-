#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s,i=0,res=0,cnt=9;
        cin>>s;
        while(s>0)
        {
            int k=min(cnt,s);
            res+=k*pow(10,i);
            s-=k;
            cnt--;
            i++;
        }
        cout<<res<<endl;
    }
}