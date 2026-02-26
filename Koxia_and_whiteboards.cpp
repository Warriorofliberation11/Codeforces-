#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        long long sum=0;
        cin>>n>>m;
        vector<int> a(n),b(m);
        for(auto &i: a) 
        cin >> i; 
		for(auto &i: b) 
        cin >> i;
		for(int i = 0;i<m;i++)
        {
			sort(a.begin(),a.end());
            a[0]=b[i];
        }
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
		cout << sum <<endl;
    }
}