class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans=INT_MIN;

        int n=nums.size();

        for(long long int i=0;i<n;i++){
            for(long long int j=i+1;j<n;j++){
            long long a=nums[i];
            long long b=nums[j];
            long long c=gcd(a,b);
            ans=max(ans,(a * b)/(c*c));
            }
        }
        return ans;
    }
};