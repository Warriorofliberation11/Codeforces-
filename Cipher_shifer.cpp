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
        string s,str="";
        cin>>s;
        for(int i=0;i<n;i++)
        {
            str+=s[i];
            i++;
            while(i<n && str.back()!=s[i])
            {
                i++;
            }
        }
        cout<<str<<endl;
    }
}