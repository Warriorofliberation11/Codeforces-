#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<vector<int>> arr(2,vector<int>(2));
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>arr[i][j];
            }
        }
        bool k=false;
        int cnt=0;
        while(!k && cnt<4)
        {
            if(arr[0][0]<arr[0][1] && arr[1][0]<arr[1][1] && arr[0][0]<arr[1][0] && arr[0][1]<arr[1][1])
            k=true;
            int t=arr[0][0];
            arr[0][0]=arr[1][0];
            arr[1][0]=arr[1][1];
            arr[1][1]=arr[0][1];
            arr[0][1]=t;
            cnt++;
        }
        if(k)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}