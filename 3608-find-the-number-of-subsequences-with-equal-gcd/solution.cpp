class Solution {
public:
    int subsequencePairCount(vector<int>& nums) {
    int Mod=1e9+7;
    int n=nums.size();
    int maxEl=*max_element(begin(nums),end(nums));
    int t[n+1][maxEl+1][maxEl+1];

    for(int first=0;first<=maxEl;first++){
      for(int second=0;second<=maxEl;second++){
        bool isequal=(first!=0 && second!=0);
        bool isgcdequal=(first==second);

        t[n][first][second]= (isequal && isgcdequal)?1:0;
      }
    }

    for(int i=n-1;i>=0;i--){
      for(int first=maxEl;first>=0;first--){
      for(int second=maxEl;second>=0;second--){
                int skip=t[i+1][first][second];
                int take1=t[i+1][__gcd(first,nums[i])][second];
                int take2=t[i+1][first][__gcd(second,nums[i])];

                t[i][first][second]=(0LL+skip+take1+take2)% Mod;
           }
        }
    }
        return t[0][0][0];
    }
};