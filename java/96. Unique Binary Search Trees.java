class Solution {
	public int numTrees(int n) {
        int[] ways = new int[n+1];
        ways[0] = 1; ways[1] = 1;
        return calc(n,ways);
    }
    
    private int calc(int n, int[] ways){
        if(ways[n] != 0) return ways[n];
        
        int totalWays = 0;
        for(int i = 1; i <= n; i++){
            totalWays += calc(i - 1, ways) * calc(n - i, ways);
        }
        
        return ways[n] = totalWays;
    }
}