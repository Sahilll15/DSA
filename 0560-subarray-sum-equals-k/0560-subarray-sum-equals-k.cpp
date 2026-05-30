class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int prefix=0;
        unordered_map<int,int> seen;
        seen[0]=1;


        for(int x:nums){
            prefix+=x;

            auto it=seen.find(prefix-k);
            if(it!=seen.end()) count+=it->second;
            seen[prefix]++;
        }

        return count;
    }
};