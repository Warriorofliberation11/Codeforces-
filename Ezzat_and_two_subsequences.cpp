#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << fixed << setprecision(9);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double sum=0;
        int maxi;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(i==0)
            maxi=a;
            else
            maxi=max(maxi,a);
            sum+=(double)a;
        }
        sum-=maxi;
        cout<<(sum/(double)(n-1))+maxi<<endl;
    }
}