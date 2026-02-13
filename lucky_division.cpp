#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int m=arr.size();
    int i=0;
    while(i<m)
    {
        if(n%arr[i]==0)
        {
            cout<<"YES";
            return 0;
        }
        i++;
    }
    cout<<"NO";
}