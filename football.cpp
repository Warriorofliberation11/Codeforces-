#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int> mp;
    string str="";
    int k=0;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        mp[a]++;
        if(mp[a]>k)
        {
            str=a;
            k=mp[a];
        }
    }
    cout<<str;
}