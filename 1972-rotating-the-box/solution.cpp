class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m=boxGrid.size();
        int n=boxGrid[0].size();
        
        vector<vector<char>> ans(n,vector<char>(m));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j]=boxGrid[j][i];
            }
        }

        for(vector<char>& row : ans){
            reverse(begin(row),end(row));
        }


        for(int j=0;j<m;j++){
            int space=n-1;
            for(int i=n-1;i>=0;i--){
             if(ans[i][j]=='*'){
                space=i-1;
                continue;
             }
             if(ans[i][j]=='#'){
                ans[i][j]='.';
                ans[space][j]='#';
                space--;
             }
            }
        }
        return ans;
    }
};