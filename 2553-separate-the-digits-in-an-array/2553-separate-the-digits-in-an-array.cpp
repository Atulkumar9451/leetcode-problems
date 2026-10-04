class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> v;
        for(int i=nums.size()-1;i>=0;i--)
        {
            while(nums[i]%10>=0&&nums[i]>0)
            {
                int num = nums[i]%10;
                nums[i]=nums[i]/10;
                v.push_back(num);

            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};