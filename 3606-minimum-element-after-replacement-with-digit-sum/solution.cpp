class Solution {
public:
    int addFunc(int x) {
        int sum = 0;

        while (x > 0) {
            sum = sum + x%10;
            x = x / 10;
        }
        return sum;
    }

    int minElement(vector<int>& nums) {
        vector<int> ans;
        int mini = INT_MAX;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            ans.push_back(addFunc(nums[i]));
        }

        for (int j = 0; j < ans.size(); j++) {
            cout<<ans[j];
            mini = min(ans[j], mini);
        }

        return mini;
    }
};