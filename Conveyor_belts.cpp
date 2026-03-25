#include<bits/stdc++.h>
using namespace std;
int cell(int &x,int &y,int &n)
{
    return min({x-1,y-1,n-x,n-y});
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x1,x2,y1,y2;
        cin>>n>>x1>>y1>>x2>>y2;
        cout<<abs(cell(x1,y1,n)-cell(x2,y2,n))<<endl;
    }
}