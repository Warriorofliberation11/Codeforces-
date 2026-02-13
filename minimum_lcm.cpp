#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        long long n;
        cin >> n;
        long long best = 1;
        for(long long i = 1; i * i <= n; i++) 
        {
            if(n % i == 0) 
            {
                long long d1 = i;
                long long d2 = n / i;
                if(d1 < n) 
                best = max(best, d1);
                if(d2 < n) 
                best = max(best, d2);
            }
        }
        cout << best << " " << n - best << "\n";
    }
}
