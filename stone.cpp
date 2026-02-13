#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int mini = INT_MAX, maxi = INT_MIN, low = -1, big = -1;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] < mini) {
                low = i;
                mini = arr[i];
            }
            if (arr[i] > maxi) {
                big = i;
                maxi = arr[i];
            }
        }

        // strategy 1: both from left
        int bothLeft = max(low + 1, big + 1);
        
        // strategy 2: both from right
        int bothRight = max(n - low, n - big);
        
        // strategy 3: one from left, one from right
        int mixed = min(low + 1, n - low) + min(big + 1, n - big);

        cout << min({bothLeft, bothRight, mixed}) << "\n";
    }
}
