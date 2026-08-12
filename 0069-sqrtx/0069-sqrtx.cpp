class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int high=x;

        int ans=0;

        while(low<=high){
            int mid=low+(high-low)/2;
            long long int square=1LL*mid*mid;

            if(square==x){
                return mid;
            }else if(square>x){
                high=mid-1;
            }else{
                low=mid+1;
                ans=mid;
            }
        }

        return ans;
    }
};