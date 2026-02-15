#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p;
        string w;
        cin>>w>>p;
        vector<int> arr(26,0);
        int sum=0;
        for(int i=0;i<w.size();i++)
        {
            arr[w[i]-'a']++;
            sum+=(w[i]-'a'+1);
        }
        int i=25;
        while(i>=0 && sum>p)
        {
            while(sum>p && arr[i]!=0)
            {
                arr[i]--;
                sum-=(i+1);
            }
            i--;
        }
        string str="";
        for(int i=0;i<w.size();i++)
        {
            if(arr[w[i]-'a']!=0)
            {
                str+=w[i];
                arr[w[i]-'a']--;
            }
        }
        cout<<str<<endl;
    }
}