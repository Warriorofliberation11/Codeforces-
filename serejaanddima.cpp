#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ser=0,dim=0;
    bool turn =true;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0,j=n-1;
    while(i<=j)
    {
        int k;
        if(arr[i]>=arr[j])
        {
            k=arr[i];
            i++;
        }
        else
        {
            k=arr[j];
            j--;
        }
        if(turn)
        ser+=k;
        else
        dim+=k;
        turn=!turn;
    }
    cout<<ser<<" "<<dim;
}