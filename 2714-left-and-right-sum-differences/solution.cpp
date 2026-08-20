class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;

        vector<int> leftsum;
        vector<int> rightsum;
        
        int n=nums.size();
        int sum1=0;
        for(int i=0;i<n;i++){
        sum1=sum1+nums[i];
        rightsum.push_back(sum1);
        }
        int sum2=0;
        for(int j=n-1;j>=0;j--){
        sum2=sum2+nums[j];
        leftsum.push_back(sum2);
        }

        reverse(leftsum.begin(),leftsum.end());
        
        for(int k=0;k<n;k++){
         ans.push_back(abs(leftsum[k]-rightsum[k]));   
        }

        return ans;
    }
};

// [10,14,22,25]
// [25,15,11,3]