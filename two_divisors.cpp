#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        long long maxi=max(a,b),mini=min(a,b);
        if(maxi%mini==0)
        cout<<(maxi*maxi)/mini<<endl;
        else
        {
            while(a%b!=0)
            {
                int temp=b;
                b=a%b;
                a=temp;
            }
            long long lcm=(maxi*mini)/b;
            cout<<lcm<<endl;
        }
    }
}