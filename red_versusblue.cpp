#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, r, b;
        cin >> n >> r >> b;
        int gaps = b + 1;
        int base = r / gaps;
        int extra = r % gaps;
        string ans;
        for (int i = 0; i < gaps; i++) 
        {
            int cntR = base + (extra > 0);
            ans.append(cntR, 'R');
            if (extra > 0) 
            extra--;
            if (i < b) 
            ans.push_back('B');
        }
        cout << ans << endl;
    }
    return 0;
}
