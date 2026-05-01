class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {//{0}

        int product=1;
        unordered_set<int> zeroIndices; //0,1
        vector<int> productArray;
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (nums[i]!=0)
            {
                product*=nums[i];
            }else{
                zeroIndices.insert(i);
            }
            
        }


        for (size_t i = 0; i < nums.size(); i++)
        {

            if (!zeroIndices.empty() && zeroIndices.count(i)==0)
            {
                productArray.push_back(0);
                
            }else{
             

                if (nums[i]!=0)
                {
                    productArray.push_back(product/nums[i]);
                }else{

                    if (zeroIndices.size()>1)
                    {
                        productArray.push_back(0);

                    }else{
                        productArray.push_back(product);

                    }
                    

                }
          
            }
        }
        

        return productArray;
        

    }
};