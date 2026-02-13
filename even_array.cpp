#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,odd=0,even=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a%2!=i%2)
            {
                if(a%2==0)
                odd++;
                else
                even++;
            }
        }
        if(odd==even)
        cout<<odd<<endl;
        else
        cout<<-1<<endl;
    }
}