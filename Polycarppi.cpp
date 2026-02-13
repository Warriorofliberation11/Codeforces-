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
        int i=0,n=s.size();
        string str="314159265358979323846264338327";
        while(i<n && s[i]==str[i])
        {
            i++;
        }
        cout<<i<<endl;
    }
}