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
        int l=1,r=n;
        bool k=true;
        vector<int> ans;
        while(n--)
        {
            if(k)
            {
                ans.push_back(r);
                r--;
            }
            else
            {
                ans.push_back(l);
                l++;
            }
            k=!k;
        }
        reverse(ans.begin(),ans.end());
        for(int i: ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}