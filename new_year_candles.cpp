#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a, b;
    cin >> a >> b;
    int total_hours = 0;
    int stubs = 0;
    while (a > 0) 
    {
        total_hours += a;       
        stubs += a;              
        a = stubs / b;           
        stubs = stubs % b;       
    }
    cout << total_hours;
}
