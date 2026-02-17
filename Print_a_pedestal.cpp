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
        int c=n/3,a=c+1,b=n-(a+c);
        if(b<=a)
        {
            b++;
            c--;
            if(b<=a)
            {
                b++;
                a--;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}