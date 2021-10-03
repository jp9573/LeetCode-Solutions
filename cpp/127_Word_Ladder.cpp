class Solution {
public:
    
    bool onediff(string a, string b){
        
        if(a.size()!=b.size()){
            return false;
        }
        int count=0;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]){
                count++;
                if(count>1){
                    return false;
                }
            }
            
        }
        
        
        return true;
        
        
    }
    
    
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        
        if(beginWord==endWord){
            return 0;
        }
        
        unordered_map<int,vector<int>> adj;
        vector<int> vis(wordList.size(),0);
        for(int i=0;i<wordList.size();i++){
            for(int j=i+1;j<wordList.size();j++){
                
                if(onediff(wordList[i],wordList[j])){
                    
                    adj[i].push_back(j);
                    
                    adj[j].push_back(i);
                }
                
                
            }
            
        }
        
        queue<int> q;
        
        for(int j=0;j<wordList.size();j++){
                
            if(onediff(beginWord,wordList[j])){

                q.push(j);
            }
            
        }
        
        
        
        int ans=0;
        
        while(!q.empty()){
            
            int levsize=q.size();
            
            while(levsize--){
                
                int temp=q.front();
                q.pop();
                
                if(temp!=-1 && wordList[temp]==endWord){
                    return ans+2;
                }
                
                for(auto x:adj[temp]){
                    if(vis[x]==0){
                        vis[x]=1;
                        q.push(x);
                    }
                }
                
                
            }
            ans++;
            
            
        }
        
        return 0;
        
        
        
        
        
        
        
        
    }
};
