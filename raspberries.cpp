#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        cin >> a[i];
        int ans = INT_MAX;
        if (k != 4) 
        {
            for (int x : a) 
            {
                if (x % k == 0) 
                {
                    ans = 0;
                    break;
                }
                ans = min(ans, k - (x % k));
            }
            cout << ans << '\n';
        } 
        else 
        {
            int even = 0; 
            for (int x : a)
            {
                if (x % 4 == 0) 
                {
                    ans = 0;
                    break;
                }
                if (x % 2 == 0) 
                even++;
                ans = min(ans, 4 - (x % 4));
            }
            if (ans == 0) 
            { 
                cout << 0 << '\n';
                continue;
            }
            if (even >= 2) 
            cout << 0 << '\n';
            else if (even == 1) 
            cout << 1 << '\n';
            else 
            cout << min(ans, 2) << '\n';
        }
    }
}
