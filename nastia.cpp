#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        long long A, B;
        cin >> A >> B;
        if (B == 1) 
        cout << "NO\n";
        else if (B == 2) 
        {
            cout << "YES\n";
            cout << A << " " << 3 * A << " " << 4 * A << "\n";
        } 
        else 
        {
            cout << "YES\n";
            cout << A << " " << A * (B - 1) << " " << A * B << "\n";
        }
    }
}

