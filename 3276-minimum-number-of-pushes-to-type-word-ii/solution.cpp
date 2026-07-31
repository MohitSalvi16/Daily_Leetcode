class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();

        unordered_map<char,int> mp;
        for(auto c: word){
            mp[c]++;
        }

        vector<int> v;

        for(auto p: mp){
            v.push_back(p.second);
        }
        sort(v.begin(),v.end(),greater<int>());

        int ct=0;
        int ans=0;
        for(auto t: v){
            ct++;
            if(ct<=8){
                ans=ans+t*1;
            }
            else if(ct<=16){
                ans=ans+t*2;
            }
            else if(ct<=24){
                ans=ans+t*3;
            }
            else{
                ans=ans+t*4;
            }
        }
        return ans;
    }
};