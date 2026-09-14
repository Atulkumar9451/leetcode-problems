class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        int i;
        int maxm=0;
        int x;
        for(auto i:mp)
        {
            if(i.second>maxm){
                maxm=i.second;
                x=i.first;

            }
            

        }
        return x;

        
    }
};