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
        int maxx=0,minx=0,miny=0,maxy=0;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            if(x==0)
            {
                if(y<0)
                miny=min(miny,y);
                else
                maxy=max(maxy,y);
            }
            else
            {
                if(x<0)
                minx=min(minx,x);
                else
                maxx=max(maxx,x);
            }
        }
        cout<<(abs(miny)+maxy+abs(minx)+maxx)*2<<endl;
    }
}