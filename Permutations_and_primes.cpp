#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
        cout<<1<<endl;
        else if(n==2)
        cout<<2<<" "<<1<<endl;
        else
        {
            vector<int> arr(n,0);
            arr[0]=3,arr[n/2]=1,arr[n-1]=2;
            int curr=4;
            for(int i=1;i<n-1;i++)
            {
                if(!arr[i])
                arr[i]=curr++;
            }
            for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
}