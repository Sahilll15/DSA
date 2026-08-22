class Solution {
public:
    bool checkDivisibility(int n) {
        int digitSum=0;
        int digitProd=1;
        int original=n;

        while(n>0){
            int digit=n%10;
            n/=10;

            digitSum+=digit;
            digitProd*=digit;
        }

        return original%(digitSum+digitProd)==0;

    }
};