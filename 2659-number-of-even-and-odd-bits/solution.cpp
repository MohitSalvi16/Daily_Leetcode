class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int> ans(2);
        string binary = "";
        while (n > 0) {
            binary = binary + to_string(n % 2);
            n = n / 2;
        }

        int m = binary.size();
        //reverse(binary.begin(), binary.end());
        int even = 0;
        int odd = 0;
        for (int i = 0; i < m; i++) {
            if(binary[i]=='1'){
            if (i % 2 == 0) {
                even++;
            } else {
                odd++;
            }
            }
        }
        ans[0] = even;
        ans[1] = odd;

        return ans;
    }
};