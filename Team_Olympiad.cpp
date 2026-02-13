#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> one,two,three;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a==1)
        one.push_back(i);
        else if(a==2)
        two.push_back(i);
        else
        three.push_back(i);
    }
    int m=min(one.size(),min(two.size(),three.size()));
    cout<<m<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
    }
}