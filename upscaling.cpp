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
        int curr=0;
        for(int i=0;i<n*2;i++)
        {
            if(i%2==0)
            curr^=1;
            int p=curr^1;
            for(int j=0;j<n*2;j++)
            {
                if(j%2==0)
                p=p^1;
                if(p==1)
                cout<<"#";
                else
                cout<<".";
            }
            cout<<endl;
        }
    }
}