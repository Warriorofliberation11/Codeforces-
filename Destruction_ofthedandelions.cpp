#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long sum=0;
        cin>>n;
        vector<int> odd;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a%2==0)
            sum+=a;
            else
            odd.push_back(a);
        }
        if(odd.size()==0)
        cout<<0<<endl;
        else
        {
            sort(odd.begin(),odd.end());
            int n=odd.size();
            for(int i=n-1;i>=n/2;i--)
            {
                sum+=odd[i];
            }
            cout<<sum<<endl;
        }
    }
}