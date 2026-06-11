#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> pref(n);
        cin>>pref[0];
        for(int i=1;i<n;i++)
        {
            int a;
            cin>>a;
            pref[i]=pref[i-1]+a;
        }
        bool check=false;
        for(int l=0;l<n-2;l++)
        {
            for(int r=l+1;r<n-1;r++)
            {
                int s1=pref[l]%3;
                int s2=(pref[r]-pref[l])%3;
                int s3=(pref[n-1]-pref[r])%3;
                if((s1==s2 && s2==s3) || (s1!=s2 && s2!=s3 && s1!=s3))
                {
                    check=true;
                    cout<<l+1<<" "<<r+1<<endl;
                    break;
                }
            }
            if(check)
            break;
        }
        if(!check)
        cout<<0<<" "<<0<<endl;
    }
}