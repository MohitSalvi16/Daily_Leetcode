class Solution {
public:   
    bool isSameAfterReversals(int num) {

        string s1=to_string(num);
        
        reverse(s1.begin(),s1.end());
        
        int n=stoi(s1);
        
        string s2=to_string(n);
        
        reverse(s2.begin(),s2.end());

        int ans=stoi(s2);
        if(ans==num){
            return true;
        }
        return false;
        
    }
};