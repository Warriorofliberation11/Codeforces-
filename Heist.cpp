#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxi=0,mini=INT_MAX;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        maxi=max(maxi,a);
        mini=min(mini,a);
    }
    cout<<(maxi-mini+1)-n<<endl;
}