#include <vector>
using namespace std;

class Solution {
public:
        int nonSpecialCount(int l, int r) {
        int n=sqrt(r);
        vector<bool> v(n+1,1);
        vector<int> prime;
        v[0]=v[1]=0;

        for(int i=2;i<=n;i++) {
            if(v[i]==1){
                prime.push_back(i);
                for(int j=i*i; j<=n; j+=i) v[j]=0;
            }
        }
        
        vector<int> ans;
        for(int i : prime){
            int special=i*i;
            if(special>=l and special<=r) ans.push_back(special);
        }

        int c=r-l;
        return c-ans.size()+1;  
    }
};
