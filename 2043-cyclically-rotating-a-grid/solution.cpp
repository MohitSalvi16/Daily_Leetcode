class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        
        int layers=min(m/2,n/2);

        for(int layer=0;layer<layers;layer++){
       
        int top=layer;
        int left=layer;
        int right=n-1-layer;
        int bottom=m-1-layer;
        
        vector<int> num;

        for(int j=left;j<=right;j++){
        num.push_back(grid[top][j]);
        }

        for(int i=top+1;i<=bottom-1;i++){
        num.push_back(grid[i][right]);
        }

        for(int j=right;j>=left;j--){
        num.push_back(grid[bottom][j]);
        }
        
        for(int i=bottom-1;i>=top+1;i--){
        num.push_back(grid[i][left]);    
        }

        int len=num.size();
        int normalised=k%len;

        rotate(begin(num),begin(num)+normalised,end(num));
         int idx=0;

        for(int j=left;j<=right;j++){
        grid[top][j]=num[idx++];
        }

        for(int i=top+1;i<=bottom-1;i++){
        grid[i][right]=num[idx++];
        }

        for(int j=right;j>=left;j--){
        grid[bottom][j]=num[idx++];
        }
        
        for(int i=bottom-1;i>=top+1;i--){
        grid[i][left]=num[idx++];   
        }
        }

        return grid;
    }
};