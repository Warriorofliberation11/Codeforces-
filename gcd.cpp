#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> pref(n), suff(n);
    for (int i = 0; i < n; ++i) cin >> pref[i];
    for (int i = 0; i < n; ++i) cin >> suff[i];

    if (n == 1) {
        cout << (pref[0] == suff[0] ? "YES" : "NO") << '\n';
        return;
    }

    int g = suff[0];

    if (g != pref[n - 1]) {
        cout << "NO\n";
        return;
    }

    for (int i = 0; i < n - 1; ++i) {
        if (__gcd(pref[i], suff[i + 1]) != g  ||
            suff[i + 1] % suff[i] != 0 || pref[i] % pref[i + 1] != 0) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
