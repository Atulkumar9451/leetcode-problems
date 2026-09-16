class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
      unordered_map<int,int> mp;
      int count=0;
      for(int i:nums)
      {
        int complement=k-i;
        if(mp[complement]>0)
        {
            count++;
            //mp.erase(complement);
            mp[complement]--;
        }
        else mp[i]++;
      }
      return count;
       
    }
};