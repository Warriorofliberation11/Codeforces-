#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b)
        {
            int t=a;
            a=b;
            b=t;
        }
        int diff=b-a-1;
        if(b==a || diff<a-1)
        cout<<-1<<endl;
        else
        {
            int n=diff-a+1+b;
            if(c>n)
            cout<<-1<<endl;
            else
            {
                int ans=c+diff+1;
                if(ans<=n)
                cout<<ans<<endl;
                else
                cout<<ans-n<<endl;
            }
        }
    }
}