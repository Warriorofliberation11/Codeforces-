#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        long long r=s-k*b;
        if(r<0)
        cout<<-1<<endl;
        else
        {
            long long totalr=n*(k-1);
            if(totalr<r)
            cout<<-1<<endl;
            else
            {
                long long total = s - k * b;
                long long first = k * b + min(total, k - 1LL);
                cout << first << " ";
                total -= min(total, k - 1LL);
                for (int i = 1; i < n; i++)
                {
                    long long add = min(total, k - 1LL);
                    cout << add << " ";
                    total -= add;
                }
                cout << endl;
            } 
        }
    }
}