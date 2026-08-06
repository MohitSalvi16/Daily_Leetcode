class Solution {
public:
    int digit_product(int x){
        int product=1;
        while(x>0){
            int digit=x%10;
            product=product*digit;
            x=x/10;
        }
        return product;
    }
    int smallestNumber(int n, int t) {
    int z=n;

    while(digit_product(z) % t != 0){
    z++;
    }
    return z;
    }
};