class Solution {
public:
    int solve(vector<int>& nums,int i, int first,int second){
    if(i==nums.size()){
        bool isequal=(first!=0 && second!=0);
        bool isgcdequal=(first==second);

        return (isequal && isgcdequal)?1:0;
    }
    int skip=solve(nums,i+1,first,second);
    int take1=solve(nums,i+1,__gcd(first,nums[i]),second);
    int take2=solve(nums,i+1,first,__gcd(second,nums[i]));
    return skip+take1+take2;
    }

    int subsequencePairCount(vector<int>& nums) {
        return solve(nums,0,0,0);
    }
};