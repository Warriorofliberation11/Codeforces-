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
        vector<string> ans;
        string str="";
        for(int i=0;i<2*n;i++)
        {
            if(i%2==0)
            str+='(';
            else
            str+=')';
        }
        ans.push_back(str);
        for(int i=1;i<2*n;i+=2)
        {
            string temp=str;
            temp[i]='(';
            temp[i+1]=')';
            ans.push_back(temp);
        }
        for(int i=0;i<n;i++)
        cout<<ans[i]<<endl;
    }
}