class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
         sort(a.begin(),a.end());
        vector<vector<int>> nv;
        vector<int> v={a[0][0],a[0][1]};
        nv.push_back(v);
        int k=0;
        
        for(int i=1;i<a.size();i++)
        {
            int x=nv[k][1];
            int y=a[i][0];
            int z=x-y;
            if(z>=0)
            {
                if(nv[k][1]<a[i][1])
                nv[k][1]=a[i][1];

            }
            else
            {
                v.clear();
                v.push_back(a[i][0]);
                v.push_back(a[i][1]);
                nv.push_back(v);
                k++;
            }
        }
        return nv;
    }
};
