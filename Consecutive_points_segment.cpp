#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        long long L = -1e18, R = 1e18;
        for (int i = 0; i < n; i++) 
        {
            long long x;
            cin >> x;
            long long y = x - i;
            L = max(L, y - 1);
            R = min(R, y + 1);
        }
        cout << (L <= R ? "YES" : "NO") << endl;
    }
}