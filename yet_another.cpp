#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int result=0;
        if(a==b)
        {
            cout<<result<<endl;
            continue;
        }
            else if(b>a)
            {
                int k=(b-a)/10;
                result+=k;
                a+=k*10;
                if(b>a)
                result++;
            }
            else
            {
                int k=(a-b)/10;
                result+=k;
                a-=k*10;
                if(a!=b)
                result++;
            }
        cout<<result<<endl;
    }
}