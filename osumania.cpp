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
        vector<int> result;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<4;j++)
            {
                char a;
                cin>>a;
                if(a=='#')
                result.push_back(j+1);
            }
        }
        reverse(result.begin(),result.end());
        for(int i=0;i<n;i++)
        cout<<result[i]<<" ";
        cout<<endl;
    }
}