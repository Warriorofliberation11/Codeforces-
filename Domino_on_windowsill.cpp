#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k1,k2;
        cin>>n>>k1>>k2;
        int w,b;
        cin>>w>>b;
        vector<vector<int>> arr(2,vector<int>(n,1));
        int white=k1+k2;
        int black=2*n-white;
        if(white/2>=w && black/2>=b)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}