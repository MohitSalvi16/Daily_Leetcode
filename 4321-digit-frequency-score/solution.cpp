class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int> mp;
        while(n>0){
            int x=n%10;
            mp[x]++;
            n=n/10;
        }
        int sum=0;
        
        for(auto it: mp){
            sum=sum+it.first*it.second;
        }
        return sum;
    }
};