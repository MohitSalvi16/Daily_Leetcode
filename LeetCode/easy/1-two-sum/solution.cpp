class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
      map<int,int> mp;
      int n=nums.size();
      for(int i=0;i<n;i++){
      int num=nums[i];
      int other=target-num;

      if(mp.find(other)!=mp.end()){
        return {mp[other],i};
      }
        mp[num]=i;
      }
      return {-1,-1};   
    }
};