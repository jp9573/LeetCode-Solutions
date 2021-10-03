/* 
1832. Check if the Sentence Is Pangram
A pangram is a sentence where every letter of the English alphabet appears at least once.
Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.
*/

class Solution {
    public boolean checkIfPangram(String sentence) {
        String str="abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<str.length();i++){
            String st=Character.toString(str.charAt(i));
            if(sentence.contains(st))
                continue;
            else
                return false;
        }
        return true;
    }
}