class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;

        int dup=n;

        while(dup>0){
        int digit=dup%10;
        sum=sum+digit;
        product=product*digit;
        dup=dup/10;
        }

        if(n%(product+sum)==0){
            return true;
        }
        return false;
    }
};