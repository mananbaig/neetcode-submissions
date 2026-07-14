class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mp;
        int left = 0;
        int maxStr = 0;
        for(int right = 0;right<s.size();right++)
        {
            while(mp.find(s[right]) != mp.end())
            {
                mp.erase(s[left]);
                left++;
            }
            mp.insert(s[right]);
            maxStr = max(maxStr,right-left+1);
        }
        return maxStr;   
    }
};
