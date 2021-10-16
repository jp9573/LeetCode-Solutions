/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
*/





class Solution {
    public int reverse(int x) {
        long r=0;
        
        for(int i=x;i!=0;i/=10){
            r=(r*10)+(i%10);
        }
        
        if(r>=Math.pow(2,31)-1||r<-Math.pow(2,31))
            return 0;
        else
            return (int)r;
    }
}