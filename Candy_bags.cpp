#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=1;
    cin>>n;
    vector<vector<int>> arr(n);
    for(int i=0;i<n;i++)
    {
        int j=i;
        do
        {
            arr[j].push_back(cnt);
            cnt++;
            j=(j+1)%n;
        } while (j!=i);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}