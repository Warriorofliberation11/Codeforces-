#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<int> ans;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                ans.push_back(cnt);
                cnt=0;
            }
            else
            cnt++;
        }
        if(cnt>0)
        ans.push_back(cnt);
        sort(ans.begin(),ans.end());
        int res=0;
        for(int i=ans.size()-1;i>=0;i-=2)
        {
            res+=ans[i];
        }
        cout<<res<<endl;
    }
}