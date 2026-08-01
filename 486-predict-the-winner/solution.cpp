class Solution {
public:

    int score(int i,int j,vector<int> &nums){
        if(i>j){
            return 0;
        }
        else if(i==j){
            return nums[i];
        }

        int player1=nums[i]+min(score(i+2,j,nums),score(i+1,j-1,nums));
        int player2=nums[j]+min(score(i,j-2,nums),score(i+1,j-1,nums));

        return max(player1,player2);
    }
    bool predictTheWinner(vector<int>& nums) {
        int total_sum=0; 
        int n=nums.size();
        for(int i=0;i<n;i++){
        total_sum=total_sum+nums[i];
        }

        int player1_score=score(0,n-1,nums);
        int player2_score=total_sum-player1_score;
       
        return player1_score>=player2_score;
    }
};