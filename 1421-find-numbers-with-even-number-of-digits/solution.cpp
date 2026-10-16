class Solution {
public:
    int countNumber(int x) {
        int count = 0;
        while (x > 0) {
            int digit = x % 10;
            count++;
            x = x / 10;
        }
        return count;
    }

    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (countNumber(nums[i]) % 2 == 0) {
                ans++;
            }
        }
        return ans;
    }
};