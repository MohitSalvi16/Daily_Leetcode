class Solution {
public:
    string generateTag(string caption) {

        string ans="#";

        int n=caption.size();

        for(int i=0;i<n;i++){
        if(caption[i]==' '){
           continue;
        }
        if(ans.length()==100){
            break;
        }

        if(ans.length()==1){
            ans=ans+(char)tolower(caption[i]);
        }

        else if(caption[i-1]==' '){
            ans=ans+(char)toupper(caption[i]);
    
        }
        else{
           ans=ans+(char)tolower(caption[i]);
        }
        }

        return ans;
        
    }
};