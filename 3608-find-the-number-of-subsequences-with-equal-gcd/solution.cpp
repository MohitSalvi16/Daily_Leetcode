class Solution {
public:
    int subsequencePairCount(vector<int>& nums) {
    int Mod=1e9+7;
    int n=nums.size();
    int maxEl=*max_element(begin(nums),end(nums));

    vector<vector<int>>prev(maxEl+1,vector<int>(maxEl+1,0));
    for(int first=0;first<=maxEl;first++){
      for(int second=0;second<=maxEl;second++){
        bool isequal=(first!=0 && second!=0);
        bool isgcdequal=(first==second);

        prev[first][second]= (isequal && isgcdequal)?1:0;
      }
    }

    for(int i=n-1;i>=0;i--){
        vector<vector<int>> curr(maxEl+1,vector<int>(maxEl+1,0));
      for(int first=maxEl;first>=0;first--){
      for(int second=maxEl;second>=0;second--){
                int skip=prev[first][second];
                int take1=prev[__gcd(first,nums[i])][second];
                int take2=prev[first][__gcd(second,nums[i])];

                curr[first][second]=(0LL+skip+take1+take2)% Mod;
           }
        }
        prev=move(curr);
    }
        return prev[0][0];
    }
};