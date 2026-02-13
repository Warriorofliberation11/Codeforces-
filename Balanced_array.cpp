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
        int d=n/2;
        if(d%2==1)
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            int even=2,odd=1,esum=0,osum=0;
            for(int i=0;i<n-1;i++)
            {
                if(i<d)
                {
                    cout<<even<<" ";
                    esum+=even;
                    even+=2;
                }
                else
                {
                    cout<<odd<<" ";
                    osum+=odd;
                    odd+=2;
                }
            }
            cout<<esum-osum<<endl;
        }
    }
}