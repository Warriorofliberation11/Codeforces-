#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        int dogs=(x<=a)?0:x-a;
        int cats=(y<=b)?0:y-b;
        if(dogs+cats>c)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}