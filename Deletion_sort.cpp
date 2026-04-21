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
        int prev=-1;
        bool k=true;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a<prev)
            k=false;
            prev=a;
        }
        if(k)
        cout<<n<<endl;
        else
        cout<<1<<endl;
    }
}