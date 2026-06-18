#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> a(3);
        cin>>a[0]>>a[1]>>a[2];
        sort(a.begin(),a.end());
        int left=2*a[1],right=a[0]+a[2];
        if(abs(left-right)%3==0)
        cout<<0<<endl;
        else
        cout<<1<<endl;
    }
}