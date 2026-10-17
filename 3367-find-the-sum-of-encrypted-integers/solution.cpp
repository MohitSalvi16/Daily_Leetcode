class Solution {
public:
    int encrypt(int x) {
        string encryptNum = to_string(x);
        int largestDigit = INT_MIN;
        while (x > 0) {
            int digit = x % 10;
            largestDigit = max(largestDigit, digit);
            x = x / 10;
        }

        string largest = to_string(largestDigit);
        string final = "";
        for (int i = 0; i < encryptNum.size(); i++) {
            final+= largest;
        }

        return stoi(final);
    }

    int sumOfEncryptedInt(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        for (int i = 0; i < n; i++) {
            cout<<encrypt(nums[i]);
            sum=sum+encrypt(nums[i]);
        }

        return sum;
    }
};