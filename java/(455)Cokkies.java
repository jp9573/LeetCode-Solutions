
class Cookies {
    public int findContentChildren(int[] greed, int[] size) {
    Arrays.sort(greed);
    Arrays.sort(size);
    int i = 0; // pointer for children
    int j = 0; // pointer for cookies
    while(i < greed.length && j < size.length) {
      if(size[j] >= greed[i]) {
        i++;
        j++;
      } else {
        j++;
      }
    }
    return i;
    }
}

//link for the question https://leetcode.com/problems/assign-cookies
