class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        unordered_map<char,int> mp;
        unordered_map<char,int> np;

        for(char val:s)
        {
           mp[val]++;
        }
        for(char val:t)
        {
            np[val]++;
        }
        for(auto it:mp)
        {
            if(mp[it.first] != np[it.first])
            {
                return false;
            }
        }
        return true;
    }
};
