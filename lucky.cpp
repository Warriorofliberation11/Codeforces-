#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int n=a.size();
        int first=(a[0]-'0')+(a[1]-'0')+(a[2]-'0');
        int second=(a[3]-'0')+(a[4]-'0')+(a[5]-'0');
        if(first==second)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}