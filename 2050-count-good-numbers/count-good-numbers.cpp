class Solution {
public:
    const int mod=1e9+7;
    long long power(long long x,long long y)
    {
        if(y==0)return 1;
        else if(y%2==0)
        return power((x*x)%mod,y/2);
        else
        return (x*power(x,y-1))%mod;
    }
    int countGoodNumbers(long long n) {
        long long even=n/2;
        long long odd=n/2;
        if(n%2)even++;
        long long first=power(5,even);
        long long second=power(4,odd);
        long long ans= ((first)*(second))%mod;
        return ans;
    }
};