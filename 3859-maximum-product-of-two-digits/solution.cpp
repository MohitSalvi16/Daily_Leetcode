class Solution {
public:
    int maxProduct(int n) {
        int ans=1;
        while(n>0){
            int digit=n%10;
            ans=ans*digit;
            n=n/10;
        }
        return ans;  
    }
};