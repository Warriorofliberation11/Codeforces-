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
        double maxi=INT_MIN,sum=0;
        for(int i=0;i<n;i++)
        {
            double a;
            cin>>a;
            maxi=max(maxi,a);
            sum+=a;
        }
        cout<<(sum-maxi)/(n-1)+maxi<<endl;
    }
}