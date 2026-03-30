#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,x,y;
        cin>>a>>b>>x>>y;
        if(b<a)
        {
            if(a%2==1 && a-b==1)
            cout<<y<<endl;
            else
            cout<<-1<<endl;
        }
        else
        {
            long long sum=0;
            while(a!=b)
            {
                long long v=a^1;
                if(v>a && v<=b && (v-a)*x>=y)
                {
                    a=v;
                    sum+=y;
                }
                else
                {
                    a++;
                    sum+=x;
                }
            }
            cout<<sum<<endl;
        }
    }
}