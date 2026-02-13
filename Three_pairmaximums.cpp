#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int dup;
        if(x!=y && y!=z && z!=x)
        cout<<"NO"<<endl;
        else
        {
            if(x==y && y==z && z==x)
            {
                cout<<"YES"<<endl;
                cout<<x<<" "<<y<<" "<<z<<endl;
            }
            else
            {
                int val;
                if(x==y)
                val=x;
                else if(y==z)
                val=y;
                else
                val=z;
                if((val!=x && x>val) || (val!=y && y>val) || (val!=z && z>val))
                cout<<"NO"<<endl;
                else
                {
                    cout<<"YES"<<endl;
                    if(x==val && y==val)
                    cout<<z<<" "<<y<<" "<<z<<endl;
                    else if(y==val && z==val)
                    cout<<x<<" "<<x<<" "<<z<<endl;
                    else
                    cout<<x<<" "<<y<<" "<<y<<endl;
                }
            }
        }
    }
}