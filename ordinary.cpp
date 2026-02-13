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
        string s=to_string(n);
        int cnt=s.size();
        int firstdivisor=0;
        while(cnt>0)
        {
            firstdivisor=firstdivisor*10+1;
            cnt--;
        }
        int sum=0;
        if(firstdivisor<=n)
        {
            sum=sum+n/firstdivisor;
        }
        firstdivisor/=10;
        while(firstdivisor>0)
        {
            sum+=9;
            firstdivisor/=10;
        }
        cout<<sum<<endl;
    }
}