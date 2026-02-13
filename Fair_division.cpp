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
        int one=0,two=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a==1)
            one++;
            else
            two++;
        }
        if(two%2==1)
        one-=2;
        if(one<0 || one%2==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}