#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while (t--) 
    {
        long long n, k;
        cin >> n >> k;
        long long m = (n + k - 1) / k;            
        long long ans = (m * k + n - 1) / n;      
        cout << ans<<endl;
    }
}
