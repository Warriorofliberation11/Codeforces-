#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,side=INT_MAX;
        cin>>a>>b;
        for(int i=0;i<3;i++)
        {
            int x,y;
            cin>>x>>y;
            side=min((int)sqrt(pow(abs(x-a),2)+pow(abs(y-b),2)),side);
            a=x,b=y;
        }
        cout<<side*side<<endl;
    }
}