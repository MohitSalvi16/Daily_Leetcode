class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();

        int maxEle=max_element(begin(nums),end(nums))-begin(nums);
        int minEle=min_element(begin(nums),end(nums))-begin(nums);

        int left=min(minEle,maxEle);
        int right=max(minEle,maxEle);

        return min({left+1+n-right,right+1,n-left});
    }
};