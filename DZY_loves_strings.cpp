#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long k;
    cin>>k;
    vector<long long> arr(26);
    long long maxi=INT_MIN,sum=0;
    for(int i=0;i<26;i++)
    {
        cin>>arr[i];
        maxi=max(maxi,arr[i]);
    }
    for(int i=1;i<=s.size()+k;i++)
    {
        if(i<=s.size())
        sum+=(i*arr[s[i-1]-'a']);
        else
        sum+=(i*maxi);
    }
    cout<<sum<<endl;
}