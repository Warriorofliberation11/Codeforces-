 if(st.size()>0)
        {
            cout<<1<<endl;
            cout<<st.size()<<" ";
            vector<int> arr;
            for(int it: st)
            arr.push_back(it);
            sort(arr.begin(),arr.end());
            for(int it: arr)
            cout<<it<<" ";
            cout<<endl;
        }