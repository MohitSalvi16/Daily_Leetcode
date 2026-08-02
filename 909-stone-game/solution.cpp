class Solution {
public:

    int solve(int i,int j,vector<int> & piles){
        if(i>j){
            return 0;
        }

        int alice_total=piles[i]+min(solve(i+2,j,piles),solve(i+1,j-1,piles));
        int bob_total=piles[j]+min(solve(i,j-2,piles),solve(i+1,j-1,piles));

        return max(alice_total,bob_total);
    }
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        int total_sum=0;
        for(int i=0;i<n;i++){
            total_sum=total_sum+piles[i];
        }
        int alice_sum=solve(0,n-1,piles);
        int bob_sum=total_sum-alice_sum;
        return alice_sum>total_sum/2;
    }
};