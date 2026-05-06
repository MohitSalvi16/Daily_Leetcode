class Solution {
public:

    int numberOne(int num){
    int count=0;
    int d=num;
    while(d>0){
       int digit=d%2;
        if(digit==1){
            count++;
        }
        d=d/2;
    }
    return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
           ans.push_back(numberOne(i));
        }
    return ans;
    }
};