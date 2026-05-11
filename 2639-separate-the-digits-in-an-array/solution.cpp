class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int number = nums[i];
            vector<int> temp;

            while (number > 0) {
                int digit = number % 10;
                temp.push_back(digit);
                number = number / 10;
            }
            reverse(temp.begin(), temp.end());

            for (int i = 0; i < temp.size(); i++) {
                ans.push_back(temp[i]);
            }
        }

        return ans;
    }
};