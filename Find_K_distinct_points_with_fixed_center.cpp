#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int xc, yc, k;
        cin >> xc >> yc >> k;
        if(k % 2 == 1)
        {
            cout << xc << " " << yc << endl;
            k--;
        }
        int i = 1;
        while(k > 0)
        {
            cout << xc + i << " " << yc + i << endl;
            cout << xc - i << " " << yc - i << endl;
            i++;
            k -= 2;
        }
    }
}