class Solution {
public:
    
    int signFunc(int x){
        if(x==0){
         return 0;
        }
        else if(x>0){
            return 1;
        }
        else{
            return -1;
        }
    }
    
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        long long product=1;
        for(int i=0;i<n;i++){
        product=product*nums[i];
        }
        
        return signFunc(product);
    }
};