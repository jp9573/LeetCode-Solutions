// Problem Link : https://leetcode.com/problems/super-egg-drop/


class Solution {
public:
        int t[102][10002];
     int solve(int k,int n)   
     {
             if(n==0||n==1)
                     return n;
             if(k==1)
                  return n;
             if(t[k][n]!=-1)
             {
                     return t[k][n];
             }
             int mn=INT_MAX;
             
             int low=0,high=n ,temp=0;
             while(low<=high)
             {
                     int mid=(low+high)/2;
                     
                     int l;
                     l=t[k-1][mid-1]!=-1? t[k-1][mid-1]:solve(k-1,mid-1);
                     int h;
                     h=t[k][n-mid]!=-1? t[k][n-mid] :solve(k,n-mid);
                     
                     temp=1+max(l,h);
                     mn=min(mn,temp);
                     if(l<h)
                        low=mid+1;
                     else
                          high=mid-1;
             }
             
             
             
             t[k][n]=mn;
             return mn;
     }
    int superEggDrop(int k, int n) {
     
         memset(t,-1,sizeof(t));
          return solve(k,n);
    }
};