#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll count_bad(ll n) 
{
    ll res = 0;
    vector<int> primes = {2, 3, 5, 7};
    int sz = primes.size();
    for (int mask = 1; mask < (1 << sz); ++mask) 
    {
        ll lcm = 1;
        int bits = 0;
        for (int i = 0; i < sz; ++i) 
        {
            if (mask & (1 << i)) 
            {
                lcm = lcm * primes[i] / __gcd(lcm, 1LL * primes[i]);
                ++bits;
            }
        }   
        if (bits % 2 == s1) 
        res += n / lcm;
        else 
        res -= n / lcm;
    }
    return res;
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) 
    {
        ll l, r;
        cin >> l >> r;
        ll total = r - l + 1;
        ll bad = count_bad(r) - count_bad(l - 1);
        cout << total - bad << '\n';
    }
    return 0;
}

