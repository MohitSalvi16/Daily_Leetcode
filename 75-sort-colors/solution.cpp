class Solution {
public:
    void sortColors(vector<int>& nums) {

        int zero = 0;
        int first = 0;
        int second = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                zero++;
            } else if (nums[i] == 1) {
                first++;
            }
            else{
                second++;
            }
        }

        for(int j=0;j<zero;j++){
        nums[j]=0;
        }
        for(int k=zero;k<zero+second;k++){
        nums[k]=1;
        }
        for(int l=zero+second;l<n;l++){
        nums[l]=2;
        }
    }
};