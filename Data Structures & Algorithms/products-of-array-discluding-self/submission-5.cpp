class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    { //{0}

        int product = 1;

        int zeroCount = 0;
        vector<int> productArray;
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                product *= nums[i];
            }
            else
            {
                zeroCount++;
            }
        }

        for (size_t i = 0; i < nums.size(); i++)
        {

            if ((zeroCount != 0 && nums[i] != 0) || zeroCount > 1)
            {
                productArray.push_back(0);
            }
            else
            {
                if (nums[i] != 0)
                {
                    productArray.push_back(product / nums[i]);
                }
                else
                {

                    productArray.push_back(product);
                }
            }
        }
        return productArray;
    }
};
