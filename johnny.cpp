#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        int cnt=0;
        bool p=true;
        cin>>a>>b;
        while(p && a!=b)
        {
            if(a<b)
            {
                if(a*8<=b)
                a*=8;
                else if(a*4<=b)
                a*=4;
                else if(a*2<=b)
                a*=2;
                else
                {
                    cout<<-1<<endl;
                    p=false;
                    break;
                }
                cnt++;
            }
            else 
            {
                cnt++;
                int n=3;
                while(n>0)
                {
                    if(a>b && (a & 1)==0)
                    a=a>>1;
                    else
                    {
                        if(n==3)
                        {
                            p=false;
                            cout<<-1<<endl;
                        }
                        break;
                    }
                    n--;
                }
            }
        }
        if(p)
        cout<<cnt<<endl;
    }
}