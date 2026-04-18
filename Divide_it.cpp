#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n;
        cin>>n;
        int cnt=0;
        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
                cnt++;
            }
            else if(n%3==0)
            {
                n=(2*n)/3;
                cnt++;
            }
            else if(n%5==0)
            {
                n=(4*n)/5;
                cnt++;
            }
            else
            {
                cnt=-1;
                break;
            }
        }
        cout<<cnt<<endl;
    }
}