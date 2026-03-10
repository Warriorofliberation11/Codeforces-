#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool k=false;
    for(int i=0;i<n;i++)
    {
        if(arr[i][0]==arr[i][1] && arr[i][1]=='O')
        {
            arr[i][0]='+';
            arr[i][1]='+';
            k=true;
            break;
        }
        else if(arr[i][3]==arr[i][4] && arr[i][4]=='O')
        {
            arr[i][3]='+';
            arr[i][4]='+';
            k=true;
            break;
        }
    }
    if(!k)
    cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
}