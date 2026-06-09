#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(l1>r2 || l2>r1)
        cout<<l2+l1<<endl;
        else
        {
            int index=-1;
            for(int i=l1;i<=r1;i++)
            {
                if(i>=l2 && i<=r2)
                {
                    index=i;
                    break;
                }
            }
            cout<<index<<endl;
        }
    }
}