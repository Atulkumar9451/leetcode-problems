class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num : nums)
        {
            mp[num]++;
        }
        int maxm=0;
        int element;
        for(auto pair:mp)
        {
            if(pair.second>maxm){
            maxm=max(maxm,pair.second);
            element = pair.first;}
        }

        return element;

        
    }
};