class Solution {
public:
    bool selfDivide(int n) {
        int num = n;
        bool self = true;

        while (n > 0) {
            int digit = n % 10;
            if(digit==0){
                self=false;
                break;
            }
            if (num % digit != 0) {
                self = false;
            }
            n = n / 10;
        }
        return self;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for (int i = left; i <= right; i++) {
            if(selfDivide(i)==true){
                ans.push_back(i);
            }
        }
        return ans;
    }
};