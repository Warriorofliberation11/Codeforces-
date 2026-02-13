#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        vector<int> curr(3,0), must(3,n/3);
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            curr[a%3]++;
        }
        while(curr[0]!=must[0] || curr[1]!=must[1] || curr[2]!=must[2])
        {
            while(curr[0]>must[0])
            {
                cnt++;
                curr[1]++;
                curr[0]--;
            }
            while(curr[1]>must[1])
            {
                cnt++;
                curr[2]++;
                curr[1]--;
            }
            while(curr[2]>must[1])
            {
                cnt++;
                curr[0]++;
                curr[2]--;
            }
        }
        cout<<cnt<<endl;
    }
}