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
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        vector<int> temp=a;
        bool k1=true,k2=true;
        reverse(temp.begin(),temp.end());
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            k1=false;
            if(temp[i]!=b[i])
            k2=false;
        }
        if(k1 || k2)
        cout<<"Bob"<<endl;
        else
        cout<<"Alice"<<endl;
    }
}