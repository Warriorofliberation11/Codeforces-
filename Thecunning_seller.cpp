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
        long long sum=0;
        while(n>=3)
        {
            int i=1;
            while(n>=pow(3,i))
            i++;
            sum+=pow(3,i)+(i-1)*pow(3,i-2);
            n-=pow(3,i-1);
        }
        cout<<sum+n*3<<endl;
    }
}