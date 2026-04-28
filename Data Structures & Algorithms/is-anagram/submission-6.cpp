class Solution
{
public:
    bool isAnagram(string &s, string &t) // hiiii hello
    {

        if (s.length() != t.length())
        {
            return false;
        }

        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;

        for (size_t i = 0; i < s.length(); i++)
        {

            sMap[s[i]]++;

            tMap[t[i]]++;
        }

        for (size_t i = 0; i < s.length(); i++)
        {
            if (tMap[s[i]] != sMap[s[i]])
            {
                return false;
            }
        }

        return true;
    }
};
