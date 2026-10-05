class Solution {
public:
    bool isGood(vector<int>& nums) {
        int len = nums.size()-1;
        if(len==0) return false;
        sort(nums.begin(),nums.end());
        if(nums.size()!=nums[len]  &&  nums.size()!=nums[len-1] && nums[len]==nums[len-1] && nums[len]==len) {
            if(len==1) return true;
           else while(len>1&&nums[len-1]==nums[len-2]+1)
            {
                len--;
            }
            if(len>1) return false; else return true;
        }
        return false;
    }
};