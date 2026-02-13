#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() 
{
    int t;
    if (!(cin >> t)) 
    return 0;
    while (t--) 
    {
        int n;
        ll k;
        cin >> n >> k;
        vector<pair<ll,int>> v; 
        v.reserve(n);
        for (int i = 1; i <= n; ++i) 
        {
            ll a; 
            cin >> a;
            ll r = a % k;
            if (r == 0) 
            r = k;
            v.emplace_back(r, i);
        }
        sort(v.begin(), v.end(), [](const pair<ll,int>& A, const pair<ll,int>& B)
        {
            if (A.first == B.first) 
            return A.second < B.second;
            return A.first > B.first; 
        });
        for (auto &p : v) 
        cout << p.second << ' ';
        cout << '\n';
    }
    return 0;
}
