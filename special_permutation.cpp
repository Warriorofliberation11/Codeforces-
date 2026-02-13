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
        if(n%2==0)
        {
            while(n>0)
            {
                cout<<n<<" ";
                n--;
            }
            cout<<endl;
        }
        else
        {
            cout<<n<<" ";
            for(int i=1;i<n;i++)
            cout<<i<<" ";
            cout<<endl;
        }
    }
}