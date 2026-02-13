#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> arr(3,0);
        string a,b,c;
        cin>>a>>b>>c;
        for(int i=0;i<3;i++)
        {
            if(a[i]!='?')
            arr[a[i]-65]++;
            if(b[i]!='?')
            arr[b[i]-65]++;
            if(c[i]!='?')
            arr[c[i]-65]++;

        }
        for(int i=0;i<3;i++)
        {
            if(arr[i]==2)
            {
                cout<<char(i+65)<<endl;
                break;
            }
        }
    }
}