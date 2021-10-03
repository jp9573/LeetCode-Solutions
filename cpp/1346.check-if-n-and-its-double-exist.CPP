class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        bool ans= false;
        for(int i=0;i!=arr.size();i++){
            for(int j=(i+1);j!=arr.size();j++){
                //cout<<arr[i]<<" "<<(2*arr[j])<<endl;;
                if(arr[i]== 2*arr[j] || arr[j]== 2*arr[i]) {   
                    ans=true;
                }
            }
        }
        return ans;
    }
};