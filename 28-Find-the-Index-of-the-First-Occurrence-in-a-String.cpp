class Solution
{
public:
    vector<int> lpsGenerator(string &s)
    {
        int n = s.length(), i = 1, j = 0;
        vector<int> lps(n);
        lps[0] = 0;
        while (i < n)
        {
            if (s[i] == s[j])
            {
                lps[i] = j + 1;
                i++;
                j++;
            }
            else
            {
                if (j > 0)
                {
                    j = lps[j - 1];
                }
                else
                {
                    lps[i++] = 0;
                }
            }
        }
        return lps;
    }
    int strStr(string haystack, string needle)
    {
        if (needle.length() == 0)
        {
            return 0;
        }
        vector<int> lps = lpsGenerator(needle);
        int i = 0, j = 0, n = haystack.length(), m = needle.length();
        while (i < n)
        {
            if (needle[j] == haystack[i])
            {
                i++;
                j++;
            }
            if (j == m)
            {
                return i - j;
            }
            else if (i < n && needle[j] != haystack[i])
            {
                if (j > 0)
                {
                    j = lps[j - 1];
                }
                else
                {
                    i++;
                }
            }
        }
        return -1;
    }
};

// Time complexity :- O(n+m) where n=haystack length, m=needle length
// Space complexity :- O(m)