#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;

        vector<int> a(k);
        unordered_map<int,int> freq;

        for(int i = 0; i < k; i++)
        {
            int a;
            cin >> a;
            freq[a]++;
        }
        int target=k-2;
        for(int i = 1; i * i <= target; i++)
        {
            if(target % i == 0)
            {
                int n = i;
                int m = target / i;
                if(freq[n]>=1 && freq[m]>=1)
                {
                    cout<<n<<" "<<m<<endl;
                    break;
                }
            }
        }
    }
}