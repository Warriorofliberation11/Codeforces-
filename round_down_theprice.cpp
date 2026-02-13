#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        long long ans=1;
        int index=1,result;
        while(ans<=m)
        {
            result=m-ans;
            ans=pow(10,index);
            index++;
        }
        cout<<result<<endl;
    }
}