#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        string s="";
        bool k=true;
        vector<int> arr;
        for(int i=0;i<q;i++)
        {
            int a;
            cin>>a;
            if(i==0 || a==arr.back())
            {
                arr.push_back(a);
                s+='1';
            }
            else if(a>arr.back())
            {
                if(k || arr[0]>=a)
                {
                    s+='1';
                    arr.push_back(a);
                }
                else
                s+='0';
            }
            else
            {
                if(k && arr[0]>=a)
                {
                    s+='1';
                    arr.push_back(a);
                    k=false;
                }
                else
                s+='0';
            }
        }
        cout<<s<<endl;
    }
}