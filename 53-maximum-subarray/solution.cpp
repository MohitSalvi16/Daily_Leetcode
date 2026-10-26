class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();
        long long int sum;
        long long int ans=INT_MIN;
        for (int i = 0; i < n; i++) {
            sum=0;
            for (int j = i; j < n; j++) {
            sum=sum+nums[j];
            ans=max(sum,ans);
            }
        }
        return ans;
    }
};