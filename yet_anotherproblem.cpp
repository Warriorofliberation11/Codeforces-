#include<bits/stdc++.h>
using namespace std;
int kcheck(long long a)
{
    vector<int> check={2,3,5,7,11,13,17,19,23,29,31,37,39,41,43,47,53,59};
    for(int i=0;i<check.size();i++)
    {
        int c=check[i];
        if(a%c!=0)
        return c;
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int small=INT_MAX;
        while(n--)
        {
            long long a;
            cin>>a;
            int smallest=kcheck(a);
            if(smallest!=-1)
            small=min(small,smallest);
        }
        if(small==INT_MAX)
        cout<<-1<<endl;
        else
        cout<<small<<endl;
    }
}