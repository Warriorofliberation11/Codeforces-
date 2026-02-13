#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin >> t)) return 0;
    while(t--){
        int n; cin >> n;
        vector<int64>a(n+1);
        for(int i=1;i<=n;i++) cin >> a[i];

        // x indices: 1..n, but meaningful only 2..n-1. We'll treat x1=xn=0.
        vector<int64> x(n+1, 0);
        x[1] = 0;
        x[2] = a[1]; // from equation j=1

        bool ok = true;
        if(x[2] < 0) ok = false; // should not happen because a1 >= 0

        // compute x3 .. x_{n-1} using recurrence for j = 2 .. n-2
        for(int j = 2; j <= n-2 && ok; ++j){
            // x_{j+1} = a_j - x_{j-1} - 2*x_j
            int64 val = a[j] - x[j-1] - 2*x[j];
            if(val < 0) { ok = false; break; }
            x[j+1] = val;
        }

        if(!ok){
            cout << "NO\n";
            continue;
        }

        // now check the last two equations:
        // j = n-1: x_{n-2} + 2*x_{n-1} + x_n(=0) == a_{n-1}
        // j = n  : x_{n-1} == a_n
        if(x[n-1] == a[n] && x[n-2] + 2*x[n-1] == a[n-1]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
