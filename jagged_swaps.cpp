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
        vector<int> arr(n);
        int mini=INT_MAX,minindex=-1;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a<mini)
            {
                mini=a;
                minindex=i;
            }
        }
        if(minindex!=0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}