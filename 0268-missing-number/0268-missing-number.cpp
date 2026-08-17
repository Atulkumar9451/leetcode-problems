class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result1=0;
        int i;
        for(i=0;i<nums.size();i++)
        {
            result1=result1^nums[i];
        }
        int result2=0;
        int j;
        for(i=0;i<=nums.size();i++)
        {
            result2=result2^i;
        }
        result2=result1^result2;
        return result2;
    }
};