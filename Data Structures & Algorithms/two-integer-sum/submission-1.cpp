class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> my_map;
        vector<int> ans;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int n = target-nums[i];
            if(my_map.find(n)!= my_map.end())
            {
               return {my_map[n],i};
            }
            my_map.insert({nums[i],i});
        }
        return {};
    }
};
