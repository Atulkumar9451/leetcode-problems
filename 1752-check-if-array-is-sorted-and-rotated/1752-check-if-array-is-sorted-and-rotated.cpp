class Solution {
public:
    bool check(vector<int>& nums) {
        int index=0;
        int length=nums.size();
        vector<int> newnums=nums;
        
        sort(newnums.begin(),newnums.end());

         for(int i=0;i<length-1;i++)
        {
           if(nums[i]>nums[i+1])
           {
           index=i+1;
           break;
           }
         }
         int x;
        for(int j=0;j<length;j++) 
        {
             if(newnums[j]!=nums[(j+index)%nums.size()]) 
             {
                x=j;
                 break;
             }
        }
       if(x<length) return false;
       return true;
    }
};