#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,cnt=0,sum=0;
        bool k=true;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            if(k && sum+s.size()<=m)
            {
                sum+=s.size();
                cnt++;
            }
            else 
            k=false;
        }
        cout<<cnt<<endl;
    }
}