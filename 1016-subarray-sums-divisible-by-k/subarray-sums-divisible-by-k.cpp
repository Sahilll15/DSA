class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       unordered_map<int,int> map;
        int sum=0;
        int count=0;
        map[0]=1;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int  rem=((sum%k)+k)%k;

            if(map.count(rem)){
                count+=map[rem];
            }

            map[rem]++;
        }
        return count;
    }
};