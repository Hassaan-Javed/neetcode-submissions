class Solution
{
public:

  inline int returnIndex(char c)
    {
        return c - 97;
    }
    bool isAnagram(string s, string t)
    {

        if (s.length() != t.length())
        {
            return false;
        }

        int countS[26] = {0};
        int countT[26] = {0};
        for (size_t i = 0; i < s.length(); i++)
        {

            countS[returnIndex(s[i])]++;
            countT[returnIndex(t[i])]++;
        }
        for (size_t i = 0; i < 26; i++)
        {

            if (countS[i] != countT[i])
            {

                return false;
            }
        }

        return true;
    }
};