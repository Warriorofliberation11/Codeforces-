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
        int even=0,odd=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a%2==0)
            even++;
            else 
            odd++;
        }
        if(odd>0)
        {
            if(odd%2==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl; 
    }
}