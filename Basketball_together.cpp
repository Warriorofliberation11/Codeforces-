#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int l = 0, r = n - 1;
    int wins = 0;

    while (l <= r) {
        long long x = arr[r];          // strongest player
        long long need = d / x + 1;  // required team size

        if (l + need - 1 <= r) {
            wins++;
            l += need - 1;  // use weakest players
            r--;            // use strongest
        } else {
            break;
        }
    }

    cout << wins << endl;
}