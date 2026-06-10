#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int> ans(501,1);
    int add=1,cnt=0;
    for(int i=2;i<=500;i++)
    {
        if(cnt==2)
        {
            cnt=1;
            add++;
        }
        else
        cnt++;
        ans[i]=ans[i-1]+add;
    }
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ans[n]<<endl;
    }
}