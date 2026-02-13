#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,pos=0,neg=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a==1)
            pos++;
            else
            neg++;
        }
        int cnt=0;
        while(1)
        {
            if(neg%2==1)
            {
                cnt++;
                neg--;
                pos++;
            }
            if(pos<neg)
            {
                cnt++;
                pos++;
                neg--;
            }
            else
            break;
        }
        cout<<cnt<<endl;
    }
}