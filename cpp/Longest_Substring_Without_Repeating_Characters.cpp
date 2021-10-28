class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        int len = s.length();

        if (len == 0)
        {
            return 0;
        }
        int max1 = INT_MIN;

        unordered_map<char, int> umap;

        int x, y;
        x = 0;
        y = 0;
        for (int i = 0; i < len; i++)
        {
            if (umap.find(s[i]) == umap.end())
            {
                umap[s[i]] = i;

                y = i;

                if (max1 < y - x + 1)
                {
                    max1 = y - x + 1;
                }
            }
            else
            {
                y++;
                while (x < y)
                {
                    if (s[i] == s[x])
                    {
                        x++;
                        break;
                    }
                    umap.erase(s[x]);
                    x++;
                }
            }
        }
        return max1;
    }
};