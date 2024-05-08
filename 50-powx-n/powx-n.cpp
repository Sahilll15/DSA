class Solution {
public:
    double myPow(double x, int n) {
        if(n== 0) return 1.0;
        if(n== 1) return x;
        if(n == -1) return 1/x;

        double ans =myPow(x,n/2);
        ans *=ans;

        if(n%2!=0){
            if(n >0){
                ans*=x;
            }else{
                ans*=1/x;
            }
        }

        return ans;
    }
};