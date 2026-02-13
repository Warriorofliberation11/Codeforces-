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
        if (n == 2) 
        {
            cout << -1 << "\n";
            continue;
        }
        vector<vector<int>> a(n, vector<int>(n));
        vector<int> vals;
        for (int i = 1; i <= n * n; i += 2) 
        vals.push_back(i);
        for (int i = 2; i <= n * n; i += 2) 
        vals.push_back(i);
        int idx = 0;
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                a[i][j] = vals[idx++];
            }
        }
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++)
                cout << a[i][j] << " ";
            cout << "\n";
        }
    }
}