class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {


        vector<vector<string>> endStrs;

        unordered_map<string, vector<string>> mapStrs;
        for (size_t i = 0; i < strs.size(); i++)
        {

              string newCopied = strs[i];
            sort(newCopied.begin(), newCopied.end());
            mapStrs[newCopied].push_back(strs[i]);

            
        }


        for (const auto& [key, value]: mapStrs){
            endStrs.push_back(value);
        }


        return endStrs;
        
        
        
    }
};
