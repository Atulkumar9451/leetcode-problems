class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
     {
        int count=0;
        int maxm=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]==1)
            {
                count++;
            }
            else if(count>maxm)
             {maxm=count;
            count=0;
            }
            else {count=0;}
            
        }
        if(count>maxm) maxm=count;
       return maxm;
    }

};