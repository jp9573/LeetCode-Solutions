class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        
        int inv=0;
        vector<int> maxs;
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]>max){
                max=nums[i];
            }
            maxs.push_back(max);
        }
        int flag=0;
        
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                if(i==0){
                    if(flag==0){
                        flag=1;
                    }
                    else{
                        return false;
                    }
                    nums[i]=nums[i+1];
                }
                else{
                    if(flag==0){
                        flag=1;
                    }
                    else{
                        return false;
                    }
                    int temp=nums[i];
                    nums[i]=nums[i+1];
                    
                    if(nums[i]<maxs[i-1]){
                        nums[i+1]=temp;
                        nums[i]=temp;
                        
                    }
                    
                }
                
            }
        }
        return true;
        
    }
};
