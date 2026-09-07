class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {

        vector<int> result;

        string s1 = "";
        for (int i = 0; i < num.size(); i++) {
            s1 = s1 + to_string(num[i]);
        }

        int num1 = stoi(s1);

        int sum = num1 + k;

        while (sum > 0) {
            int digit = sum % 10;
            result.push_back(digit);
            sum = sum / 10;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};