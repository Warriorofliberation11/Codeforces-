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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        set<int> st;
        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>i;j--)
            {
                if(arr[i]>arr[j])
                st.insert(j);
            }
        }
        cout<<st.size()<<endl;
    }
}