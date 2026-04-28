class Solution
{
public:
    bool isAnagram(string s, string t) // hiiii hello
    {

        int lenS = s.length();
        int lenT = t.length();
        if (lenS != lenT)
        {
            return false;
        }

        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;

        for (size_t i = 0; i < lenS; i++)
        {

            sMap[s[i]]++;

            tMap[t[i]]++;
        }

        for (size_t i = 0; i < lenS; i++)
        {
            if (tMap[s[i]] != sMap[s[i]])
            {
                return false;
            }
        }

        return true;
    }
};