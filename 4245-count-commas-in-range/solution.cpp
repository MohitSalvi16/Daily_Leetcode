class Solution {
public:
    int noComma(int n) {
        string num = to_string(n);
        int size = num.size();
   
        int noOfCommas=0;
    
        if(size>3){
        noOfCommas = (size / 2) - 1;
        }

        return noOfCommas;
    }

    int countCommas(int n) {

        int result = 0;

        for (int i = 1; i <= n; i++) {
            result = result + noComma(i);
        }
        return result;
    }
};
