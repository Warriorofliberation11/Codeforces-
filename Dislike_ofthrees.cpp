#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,j=1;
    vector<int> v(1001);
    while(j<1001)
    {
        if(i%3!=0 && i%10!=3)
        v[j++]=i;
        i++;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        cout<<v[k]<<endl;
    }
}