#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int total_twos = 0;
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
            if (a[i] == 2) 
            total_twos++;
        }
        int left_twos = 0;
        int answer = -1;
        for (int k = 1; k < n; ++k) 
        {
            if (a[k - 1] == 2) 
            left_twos++;
            int right_twos = total_twos - left_twos;
            if (left_twos == right_twos) 
            {
                answer = k;
                break;
            }
        }
        cout << answer <<endl;
    }
}
