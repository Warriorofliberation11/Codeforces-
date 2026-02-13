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
        int max_product=0;
        for(int i=0;i<=5;i++)
        {
            for(int j=0;j<=5-i;j++)
            {
                for(int k=0;k<=5-i-j;k++)
                {
                    int new1=a+i,new2=b+j,new3=c+k;
                    max_product=max(max_product,new1*new2*new3);
                }
            }
        }
        cout<<max_product<<endl;
    }
}