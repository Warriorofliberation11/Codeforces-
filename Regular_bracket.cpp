#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int r=0,cnt=0,n=str.size();
        if(n%2==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if (str[n - 1] == '(')
        {
            cout << "NO\n";
            continue;
        }
        bool k=true;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='?')
            r++;
            else if(str[i]==')')
            cnt--;
            else
            cnt++;
            if(cnt<0)
            {
                if(cnt+r>=0)
                {
                    r+=cnt;
                    cnt=0;
                }
                else
                {
                    k=false;
                    break;
                }
            }
        }
        if(!k)
        cout<<"NO"<<endl;
        else
        {
            if(cnt>r)
            cout<<"NO"<<endl;
            else
            {
                r-=cnt;
                if(r%2==0)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }
        }
    }
}