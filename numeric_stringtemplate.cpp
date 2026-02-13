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
        vector<int> a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        int m;
        cin>>m;
        while(m--)
        {
            string str;
            cin>>str;
            if(str.size()!=a.size())
            cout<<"NO"<<endl;
            else
            {
                map<char,int> ctoint;
                map<int,char> inttoc; 
                bool p=true;
                for(int i=0;i<n;i++)
                {
                    if(ctoint.find(str[i])!=ctoint.end())
                    {
                        if(ctoint[str[i]]!=a[i])
                        {
                            p=false;
                            break;
                        }
                    }
                    if(inttoc.find(a[i])!=inttoc.end())
                    {
                        if(inttoc[a[i]]!=str[i])
                        {
                            p=false;
                            break;
                        }
                    }
                    inttoc[a[i]]=str[i];
                    ctoint[str[i]]=a[i];
                }
                if(p)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }
        }
    }
}