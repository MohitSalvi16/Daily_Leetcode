class Solution {
public:
    int missingInteger(vector<int>& nums) {

        int n=nums.size();
        unordered_set<int> st(begin(nums),end(nums));

        int sum=nums[0];
        for(int j=1;j<n;j++){
            if(nums[j]==nums[j-1]+1){
                sum=sum+nums[j];
            }else{
                break;
            }
        }
    
    while(st.count(sum)){
        sum++;
    }

    return sum;    
    }
};

