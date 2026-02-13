#include<bits/stdc++.h>
using namespace std;
bool is_square(long long x) 
{
    long long r = sqrt(x) - 1LL;
    return r*r == x || (r+1LL) * (r+1LL) == x || (r+2LL) * (r+2LL) == x;
}
void solve() 
{
    long long n; 
    cin >> n;
    while(!(n%2)) 
    {
        n /= 2LL;
        if(is_square(n)) 
        {
            cout << "YES" << '\n'; 
            return;
        }
    }
    cout << "NO" << '\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}