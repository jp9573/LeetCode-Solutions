//605. Can Place Flowers
//Java
class Solution {
    public boolean canPlaceFlowers(int[] f, int n) {
        int length = f.length;
        for(int i = 0; i<length; i++){
            if(f[i] == 0 && (i==0 || f[i-1] != 1) && (i==length-1 || f[i+1]!=1 )){
                n--;
                i++;
            }
            if(n<=0)return true;
        }
        return n==0;
    }
}
    