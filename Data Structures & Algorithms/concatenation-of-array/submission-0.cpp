class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int>result(n+n);
        int l = n;
        for(int i=0;i<n;i++)
        {
            result[i] = nums[i];
        }

        for(int i=0;i<n;i++)
        {
            result[l] = nums[i];
            l++;
        }


        return result;
        
    }
};