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
        int width=0,height=0;
        for(int i=0;i<n;i++)
        {
            int w,h;
            cin>>w>>h;
            width=max(width,w);
            height=max(height,h);
        }
        cout<<2*(width+height)<<endl;
    }
}