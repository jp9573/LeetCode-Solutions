class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int arr[1001];
        vector <int> ans;
        fill_n(arr, 1001, 0);
        int sz1= nums1.size();
        int sz2= nums2.size();
        if(sz1>sz2)
        {
            for(int i=0; i<sz1; i++)
            arr[nums1[i]]++;
            for(int i=0; i<sz2; i++)
            {
                if(arr[nums2[i]]>0)
                {
                    ans.push_back(nums2[i]);
                    arr[nums2[i]]--;
                }
            }
        }
        else
        {
            for(int i=0; i<sz2; i++)
            arr[nums2[i]]++;
            for(int i=0; i<sz1; i++)
            {
                if(arr[nums1[i]]>0)
                {
                    ans.push_back(nums1[i]);
                    arr[nums1[i]]--;
                }
            }
        }
        return ans;
    }
};