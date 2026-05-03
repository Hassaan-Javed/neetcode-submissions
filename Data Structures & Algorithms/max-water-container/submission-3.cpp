class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater=0;
        int start = 0;
        int end = heights.size()-1;
        while (start<end)
        { 
            int edge = min(heights[start], heights[end]);

            int base = end-start;

            if (edge*base > maxWater)
            {
                maxWater = edge*base;
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