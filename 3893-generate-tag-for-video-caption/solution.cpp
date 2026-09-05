class Solution {
public:
    string generateTag(string caption) {

        string ans="#";

        int n=caption.size();

        for(int i=0;i<n;i++){
        if(caption[i]==' '){
           continue;
        }
        if(i==0){
            ans=ans+(char)tolower(caption[i]);
        }

        else if(i>0 && caption[i-1]==' '){
            ans=ans+(char)toupper(caption[i]);
    
        }
        else{
           if(ans.length()<100){
           ans=ans+caption[i];
           }
        }
        }

        return ans;
        
    }
};