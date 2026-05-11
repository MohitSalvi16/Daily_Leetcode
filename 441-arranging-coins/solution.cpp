class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        int latest=n;
        for(int i=1;i<n;i++){
            latest=latest-i;
            if(latest<0){
                break;
            }
            count++;
        }
        return count;
    }
};