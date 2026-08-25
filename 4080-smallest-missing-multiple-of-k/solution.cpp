class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
 
        unordered_set<int> mp(nums.begin(),nums.end());

        int result=k;

        while(mp.find(result)!=mp.end()){
           result=result+k; 
        }
    
     return result;
    }
};