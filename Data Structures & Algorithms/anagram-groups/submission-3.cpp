class Solution {
public:
    bool isAnagram(string s, string t)
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

        for (size_t i = 0; i < s.size(); i++)
        {
            if (sMap[s[i]] != tMap[s[i]])
            {
                return false;
            }
        }

        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> anagramSet;
        for (size_t i = 0; i < strs.size(); i++)
        {
            
            vector<string> localAnagrams;
            localAnagrams.clear();
            localAnagrams.push_back(strs[i]);
            for (size_t j = i+1; j < strs.size(); )
            {
                if (isAnagram(strs[i], strs[j]))
                {
                    localAnagrams.push_back(strs[j]);
                    strs.erase(strs.begin() + j);

                }else{
                    j++;
                }
                
            }

            anagramSet.push_back(localAnagrams);


            
        }

        return anagramSet;
        
    }
};
