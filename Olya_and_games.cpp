#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        long long sum_s2 = 0;
        long long global_min_s1 = LLONG_MAX;
        long long min_s2 = LLONG_MAX;
        for (int i = 0; i < n; ++i) 
        {
            int m;
            cin >> m;
            vector<long long> a(m);
            for (auto &x : a) 
            cin >> x;
            sort(a.begin(), a.end());
            long long s1 = a[0];
            long long s2 = a[1];
            sum_s2 += s2;
            global_min_s1 = min(global_min_s1, s1);
            min_s2 = min(min_s2, s2);
        }
        cout << sum_s2 - min_s2 + global_min_s1 << '\n';
    }
}