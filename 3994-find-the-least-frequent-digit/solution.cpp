class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int, int> mp;

        while (n > 0) {
            int digit = n % 10;
            mp[digit]++;
            n = n / 10;
        }
        int ans =-1;
        int minFreq=INT_MAX;

        for (int digit=0;digit<=9;digit++) {
                if(mp.find(digit)!=mp.end()){
                    if(mp[digit]<minFreq){
                       minFreq=mp[digit];
                       ans=digit;
                    }
                }    
        }
        return ans;
    }
};