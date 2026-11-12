class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int times = nums.size()/3;
        unordered_map<int,int> mp;
        for(int num : nums)
        {
            mp[num]++;
        }

        vector<int> v;

        for(auto pair : mp)
        {
            if(pair.second>times)
            {
                v.push_back(pair.first);
            }
        }
        return v;
    }
};