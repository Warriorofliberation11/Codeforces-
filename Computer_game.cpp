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
        string first,last;
        cin>>first>>last;
        bool k=true;
        for(int i=0;i<n;i++)
        {
            if(i+1<n && first[i]=='1' && last[i]=='1')
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