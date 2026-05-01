class Solution {
public:

    string encode(vector<string>& strs) {

        string encoded;
        for (size_t i = 0; i < strs.size(); i++)
        {
            string curStr = strs[i];
            encoded.append(curStr);

            encoded.append("-");
        }
        return encoded;

    }

    vector<string> decode(string s) {
        vector<string> strs;
        string currentstr="";

        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i]!='-')
            {
                currentstr.push_back(s[i]);
            }else{
                strs.push_back(currentstr);
                currentstr.clear();
            }
            
        }
        return strs;

    }
};