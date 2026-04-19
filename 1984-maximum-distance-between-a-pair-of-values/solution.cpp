class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();

        int m = nums2.size();
        int ans = INT_MIN;
        for (int j = 0; j < m; j++) {
            for (int i = 0; i <= j && i<n; i++) {
                if (nums1[i]<=nums2[j]) {
                    ans = max(ans, j - i);
                }
            }
        }
        if(ans==INT_MIN){
            return 0;
        }
        return ans;
    }
};