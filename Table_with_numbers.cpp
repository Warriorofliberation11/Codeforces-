#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,h,l,hlow=0,llow=0;
        cin>>n>>h>>l;
        if(h>l)
        {
            int temp=h;
            h=l;
            l=temp;
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a<=h)
            hlow++;
            if(a<=l)
            llow++;
        }
        int a=min(hlow,llow-hlow);
        cout<<min(hlow,a)+max(0,(hlow-a))/2<<endl;
    }
}