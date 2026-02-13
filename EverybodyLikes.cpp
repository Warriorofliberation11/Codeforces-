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
        int cnt=0,prev;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(i!=0 && prev==a%2)
            {
                cnt++;
                prev=a%2;
            }
            else
            prev=a%2;
        }
        cout<<cnt<<endl;
    }
}