class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxLength = 0;

        for (auto const element : numSet)
        {
            cout<<element<<endl;
            if (numSet.find(element - 1) == numSet.end())
            {

                int current = element;
                int lengthCurrent = 1;
                while (numSet.find(current+1) != numSet.end())
                {
                    current++;
                    lengthCurrent++;
                }
                maxLength = max(maxLength, lengthCurrent);

            }
        }

        
        return maxLength;
    }
};
