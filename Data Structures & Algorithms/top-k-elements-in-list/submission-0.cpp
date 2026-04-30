class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> map;

        vector<int> freq;
        for (size_t i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
        }

        for (size_t i = 0; i < k; i++)
        {
            int largestVal=0;
            int largestKey=0;

            for (auto const & [key, val]: map)
            {
                if (val>largestVal)
                {
                   largestVal = val;
                   largestKey = key; 
                }
                
            }
            freq.push_back(largestKey);
            map[largestKey] = 0;
        

        }

        return freq;
        
        
        
    }
};