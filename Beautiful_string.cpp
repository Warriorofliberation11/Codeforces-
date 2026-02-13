#include<bits/stdc++.h>
using namespace std;
bool palindrome(string &str,int &n,vector<int>&vis)
{
    int i=0,j=n-1;
    while(i<j)
    {
        if(vis[i]==1)
        {
            i++;
            continue;
        }
        if(vis[j]==1)
        {
            j--;
            continue;
        }   
        if(str[i]!=str[j])
        return false;
        i++;
        j--;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        vector<int> ans;
        int i=0,j=n-1;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                if(s[i]=='1')
                {
                    ans.push_back(i+1);
                    i++;
                }
                else
                {
                    ans.push_back(j+1);
                    j--;
                }
            }
        }
        cout<<ans.size()<<endl;
        sort(ans.begin(),ans.end());
        for(int i: ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}