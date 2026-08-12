class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n=nums.size();
        int size=0;
        int maxi=0;

        for(int i=0;i<n;i++){
        mp[nums[i]]++;
        maxi=max(maxi,mp[nums[i]]);
        if(maxi>k){
         break;
        }
        size++;
        } 
        return size;
    }
};