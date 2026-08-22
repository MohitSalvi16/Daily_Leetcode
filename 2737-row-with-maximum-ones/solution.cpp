class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {

        int n=mat.size();
        vector<int> ans(2);

        int maxi=INT_MIN;

        for(int i=0;i<n;i++){
            int one=0;
            for(int j=0;j<mat[0].size();j++){
            if(mat[i][j]==1){
            one++; 
            }
            }

            if(one>maxi){
            ans[1]=one;
            ans[0]=i;
            }
            maxi=max(maxi,one);
        }
        return ans;
    }
};