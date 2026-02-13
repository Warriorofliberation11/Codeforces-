#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h;
        long long maxi=LLONG_MIN;
        cin>>w>>h;
        for(int i=0;i<4;i++)
        {
            int k;
            cin>>k;
            long long  first=-1,last=-1;
            while(k--)
            {
                long long a;
                cin>>a;
                if(first==-1)
                first=a;
                else
                last=a;
            }
            if(i>=2)
            maxi=max(maxi,(last-first)*w);
            else
            maxi=max(maxi,(last-first)*h);
        }
        cout<<maxi<<endl;
    }
}