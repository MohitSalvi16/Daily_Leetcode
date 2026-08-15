class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();

        int xorAns=0;

        int allZero=true;

        for(auto &x: nums){
        xorAns=(xorAns^x);

        if(x!=0){
        allZero=false;
        }
        }
        if(allZero){
            return 0;
        }
        return (xorAns==0)? n-1: n;
    }
};