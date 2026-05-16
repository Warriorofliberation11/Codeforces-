#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,s;
        cin>>m>>s;
        vector<int> arr(m);
        int maxi=0;
        for(int i=0;i<m;i++)
        {
            cin>>arr[i];
            maxi=max(maxi,arr[i]);
        }
        sort(arr.begin(),arr.end());
        for(int i=0,j=1;i<m;i++,j++)
        {
            while(arr[i]!=j)
            {
                s-=j;
                j++;
            }
        }
        if(s<0)
        cout<<"NO"<<endl;
        else if(s==0)
        cout<<"YES"<<endl;
        else
        {
            int a=maxi+1;
            while(s>0)
            {
                s-=a;
                a++;
            }
            if(s==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}