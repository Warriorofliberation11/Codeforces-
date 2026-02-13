#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int total = a + 2 * b;
        if (total % 2 != 0)
        {
            cout << "NO\n";
            continue;
        }

        int half = total / 2;
        bool possible = false;
        for (int i = 0; i <= b; i++)
        {
            int sum_2s = 2 * i;
            int need_1s = half - sum_2s;
            if (0 <= need_1s && need_1s <= a)
            {
                possible = true;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }
}
