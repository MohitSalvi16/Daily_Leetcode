class Solution {
public:
    int findMin(vector<int>& nums) {
        int min_num=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            min_num=min(min_num,nums[i]);
        }
        return min_num;
    }
};