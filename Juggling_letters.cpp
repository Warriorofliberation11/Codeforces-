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
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            for(char i:s)
            {
                mp[i]++;
            }
        }
        bool k=true;
        for(auto it: mp)
        {
            if(it.second%n!=0)
            {
                k=false;
                break;
            }
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}