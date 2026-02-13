#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        continue;
        arr[i]=1;
        int diff=(3-i%4);
        bool k=true;
        for(int j=diff;j<n;j+=4)
        {
            if(arr[j]==0)
            {
                arr[j]=1;
                k=!k;
                break;
            }
        }
        if(k)
        { 
            cout<<"ALICE"<<endl;
            return;
        }
    }
    cout<<"BOB"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}