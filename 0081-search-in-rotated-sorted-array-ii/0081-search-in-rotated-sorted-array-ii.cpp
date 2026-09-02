class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right)
        {
            int mid=(left + right)/2;
            if(nums[mid]==target)
            {
                return true;
            }
             if(nums[left]==nums[mid]&&nums[mid]==nums[right])
            {
                left++;
                right--;
                continue;
            }
            if(nums[mid]>=nums[left])
            {
                if(target>=nums[left]&&target<=nums[mid]&&nums[left+1]>=nums[left])
                {
                    right=mid-1;
                }
                else left=mid+1;
            }
            else {
                if(target<=nums[right]&&target>nums[mid])
                {
                    left=mid+1;
                }
                else right=mid-1;
            }
        }
        return false;
    }
};