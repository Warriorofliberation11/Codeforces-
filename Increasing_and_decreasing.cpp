#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        vector<int> a(n);
        a[0] = x;
		a[n - 1] = y;
		for(int i = n - 2, j = 1; i > 0; --i, ++j)
        {
			a[i] = a[i + 1] - j;
		}
		int f = 0;
		for(int i = 1; i < n; ++i) 
        {
            if((a[i] <= a[i - 1]) || (i!=1 && a[i - 1] - a[i - 2] <= a[i] - a[i - 1]))
            {
                f = 1; 
                break;
            }
        }
		if(f) 
        cout << "-1" << endl;
		else
        {
            for(int i: a)
            cout<<i<<" ";
            cout<<endl;
		}
    }
}