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
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int cnt=0,ecnt=0,k=0,index=-1;
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(a[i]<b[i])
            {
                cnt++;
                k=b[i]-a[i];
                index=i;
            }
            else if(a[i]==b[i])
            ecnt++;
        }
        if(cnt>1 || (cnt==1 && ecnt>0))
        cout<<"NO"<<endl;
        else
        {
            bool p=true;
            for(int i=0;i<n;i++)
            {
                if(i!=index && (a[i]-b[i])<k)
                p=false;
            }
            if(p)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}