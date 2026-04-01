#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n),ans(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ans[i]=arr[i]/2;
    }
    int total=accumulate(ans.begin(),ans.end(),0);
    if(total!=0)
    {
        for(int i=0;i<n && total!=0;i++)
        {
            if(arr[i]>0)
            {
                if(total<0)
                {
                    int v=(arr[i]+1)/2;
                    if(ans[i]!=v)
                    {
                        ans[i]=v;
                        total++;
                    }
                }
            }
            else if(arr[i]<0)
            {
                if(total>0)
                {
                    int v=(arr[i]-1)/2;
                    if(ans[i]!=v)
                    {
                        ans[i]=v;
                        total--;
                    }
                }
            }
        }
    }
    for(int it: ans)
    {
        cout<<it<<endl;
    }
}