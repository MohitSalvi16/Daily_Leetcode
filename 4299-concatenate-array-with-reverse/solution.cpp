class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size();

        for(int j=n-1;j>=0;j--){
            nums.push_back(nums[j]);
        }

        return nums;
    }
};