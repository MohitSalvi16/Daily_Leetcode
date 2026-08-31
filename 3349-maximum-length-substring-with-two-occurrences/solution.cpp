class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<char,int> mp;
        int n=s.size();

        int maxx=0;
        int left=0;
        for(int i=0;i<n;i++){
            mp[s[i]]++;

            while(mp[s[i]]>2){
                mp[s[left]]--;
                left++;
            }
            maxx=max(maxx,i-left+1);
        }
        return maxx;
    }
};

