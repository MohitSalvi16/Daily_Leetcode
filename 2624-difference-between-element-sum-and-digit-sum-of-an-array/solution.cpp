class Solution {
public:

    int sumDigit(int n){
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    return sum;
    }

    int differenceOfSum(vector<int>& nums) {

        int n=nums.size();
        int elSum=0;
        int digitSum=0;

        for(int i=0;i<n;i++){
            elSum=elSum+nums[i];
            digitSum=digitSum+sumDigit(nums[i]);
        }
    return abs(elSum-digitSum);
    }
};