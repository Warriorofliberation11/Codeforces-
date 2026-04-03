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
        long long min1=INT_MAX,min2=INT_MAX,max1=INT_MIN,max2=INT_MIN;
        for(int i=0;i<n;i++)
        {
            long long a;
            cin>>a;
            if(a<min1)
            {
                min2=min1;
                min1=a;
            }
            else
            min2=min(min2,a);
            if(a>max1)
            {
                max2=max1;
                max1=a;
            }
            else
            max2=max(max2,a);
        }
        cout<<max(min1*min2,max1*max2)<<endl;
    }
}