class Solution {
public:
    bool isGood(int i){
        bool changed=false;
        while(i>0){
            int d=i%10;
            if(d==3 || d==4 || d==7){
                return false;
            }
            if(d==2 || d==5 || d==6 || d==9){
            changed=true;
            }
            i=i/10;
        }
        return changed;
    }
    int rotatedDigits(int n) {
        int count=0;
        for(int i=0;i<=n;i++){
        if(isGood(i)==true){
            count++;
        }
        }
        return count;
    }
};