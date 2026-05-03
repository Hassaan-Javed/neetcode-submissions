class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater=0;
        int start = 0;
        int end = heights.size()-1;
        while (start<end)
        { 


            if (min(heights[start], heights[end])*(end-start) > maxWater)
            {
                maxWater = min(heights[start], heights[end])*(end-start);
            }
            
            if (heights[start]>heights[end])
            {
                end--;

            }
            else{
                start++;
            }
            

        }

        return maxWater;
        



    }

    


};