class Solution {
public:
    vector<int> plusOne(vector<int>& digit) {
        
        int carry =1;
        
        for(int i=digit.size()-1;i>=0;i--)
        {
            int k = digit[i]+carry;
             digit[i] = k%10;
            carry = k/10;
            
        }
        if(digit[0]==0)
        {
            digit.insert(digit.begin(),1);
        }
        
        
        return digit;
        
        
    }
};
