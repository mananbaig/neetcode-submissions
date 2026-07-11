class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0;
        int right = n-1;
        int maxArea = 0;
        int area = 1;
        int width = 0;
        int length = 0;
        while(left < right)
        {
            width = right - left;
            length = min(heights[right],heights[left]);
            area = width*length;
            maxArea = max(maxArea,area);
            if(heights[right] < heights[left])
            {
                right--;
            }
            else 
            {
                left++;
            }
        }
        return maxArea;
    }
};
