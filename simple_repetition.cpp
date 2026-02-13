#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,k;
        cin>>x>>k;
        if(k>1 &&  x>1)
        cout<<"NO"<<endl;
        else if(x==1)
        {
            if(k==2)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        {
            bool k=true;
            for(int i=2;i<=sqrt(x);i++)
            {
                if(x%i==0)
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
}