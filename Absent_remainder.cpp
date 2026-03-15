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
        vector<int> arr(n);
        set<int> st;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            st.insert(arr[i]);
        }
        sort(arr.begin(),arr.end());
        int cnt=n/2;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                continue;
                int a=arr[j]%arr[i];
                if(st.find(a)==st.end())
                {
                    cout<<arr[j]<<" "<<arr[i]<<endl;
                    cnt--;
                }
                if(cnt==0)
                break;
            }
            if(cnt==0)
            break;
        }
    }
}