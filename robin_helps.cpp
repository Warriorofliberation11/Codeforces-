#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int curr=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a!=0)
            {
                if(a>=k)
                curr+=a;
            }
            else
            {
                if(curr>0)
                {
                    cnt++;
                    curr--;
                }
            }
        }
        cout<<cnt<<endl;
    }
}