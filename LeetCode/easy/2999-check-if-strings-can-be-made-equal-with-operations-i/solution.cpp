class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        bool ans=false; 
        if(s1[0]==s2[0] && s1[2]==s2[2] && s1[1]==s2[1] && s1[3]==s2[3]){
            ans=true;
        }
        else if(s1[0]==s2[0] && s1[2]==s2[2] && s1[1]==s2[3] && s1[3]==s2[1]){
        ans=true;
        }
        else if(s1[0]==s2[2] && s1[2]==s2[0] && s1[1]==s2[1] && s1[3]==s2[3]){
        ans=true;
        }
        else if(s1[0]==s2[2] && s1[2]==s2[0] && s1[1]==s2[3] && s1[3]==s2[1]){
        ans=true;  
        }
        return ans;
    }
};