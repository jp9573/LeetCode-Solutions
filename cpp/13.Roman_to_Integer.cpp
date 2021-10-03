class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char,int> M{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}, 
        };
        int sum = M[s.back()];
        for(int i =0 ;i<s.size()-1;i++){
            if(M[s[i]]<M[s[i+1]])
                sum -= M[s[i]];
            else
                sum += M[s[i]];
        }
        
        return sum;
    }
};
