class Solution
{
public:
    bool isAnagram(string s, string t) //hiiii hello
    {
        if (s.length() != t.length())
        {
            return false;
        }

        
        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;

        for (size_t i = 0; i < s.length(); i++)
        {
            if (sMap[s[i]])
            {
                int sCount = sMap[s[i]];
                sCount++;
                sMap[s[i]]=sCount;
            }else{
                sMap[s[i]]=1;
            }

            if (tMap[t[i]])
            {
                int tCount = tMap[t[i]];
                tCount++;
                tMap[t[i]]=tCount;
            }else{
                tMap[t[i]]=1;
                
            }
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