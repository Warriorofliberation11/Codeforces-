#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string str="codeforces";
    while(t--)
    {
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<10;i++)
        {
            cnt+=(str[i]!=s[i])?1:0;
        }
        cout<<cnt<<endl;
    }
}