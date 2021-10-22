class Solution {
public:
    string frequencySort(string s) {
        
        map<char,int>mp;
        
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        vector<pair<int,char>>vp;
        
        for(auto it:mp)
        {
            vp.push_back({it.second,it.first});
            
        }
        sort(vp.begin(),vp.end(),greater<pair<int,int>>());
        
        string st="";
        for(auto it:vp)
        {
            for(int i=0;i<it.first;i++)
            {
                st+=it.second;
            }
        }
        
        
       
        return st;
       
    }
};
