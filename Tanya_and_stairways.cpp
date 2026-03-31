#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> ans;
    int prev;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(i!=0 && a<=prev)
        ans.push_back(prev);
        prev=a;
    }
    ans.push_back(prev);
    cout<<ans.size()<<endl;
    for(int i: ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}