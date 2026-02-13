#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int first=a-1,second=abs(b-c)+c-1;
        if(first==second)
        cout<<3<<endl;
        else if(first<second)
        cout<<1<<endl;
        else
        cout<<2<<endl;
    }
}