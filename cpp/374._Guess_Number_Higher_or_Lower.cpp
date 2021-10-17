/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        return gn(1,n);
    }
    int gn(long long l,int h){
        switch(guess((l+h)/2)){
            case 0:
                return (l+h)/2;
            case 1:
                return gn((l+h)/2+1,h);
            case -1:
                return gn(l,(l+h)/2);
        }
        return 1;
            
    }
};
