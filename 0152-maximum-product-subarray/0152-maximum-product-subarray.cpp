class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        long long maxProduct = nums[0];
        for(int i = 0 ; i < nums.size() ; i++)
        {
            long long currProduct = 1;

            for(int j = i; j< nums.size() ;j++)
            {
                currProduct *= nums[j];

                if(currProduct > maxProduct) maxProduct = currProduct;
            }
            
        }

        return maxProduct;
    }
};