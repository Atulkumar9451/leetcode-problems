class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double totalSum=0;
        int Sum=0;
        double maxAvg;
        if(k==1)
        {
            totalSum=*max_element(nums.begin(),nums.end());
        }
        else{
        for(int i=0;i<k;i++)
        {
           totalSum=totalSum+nums[i];
        }
        int left=0;
        double sum=totalSum;
        for(int right=k;right<nums.size();right++)
        {
            sum=sum+nums[right]-nums[left];
            totalSum=max(totalSum,sum);
            left++;
        }}

       return maxAvg=totalSum/k;

    }
};