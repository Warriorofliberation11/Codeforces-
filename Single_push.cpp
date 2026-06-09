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
        cin>>a[i];
        bool check=true;
        for(int i=0;i<n;i++)
        {
            int v;
            cin>>v;
            b[i]=v-a[i];
            if(b[i]<0)
            check=false;
        }
        if(!check)
        cout<<"NO"<<endl;
        else
        {
            int i=0;
            while(i<n && b[i]==0)
            i++;
            if(i==n)
            cout<<"YES"<<endl;
            else
            {
                int v=b[i];
                while(i<n && b[i]==v)
                i++;
                while(i<n && b[i]==0)
                i++;
                if(i==n)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }
        }
    }
}