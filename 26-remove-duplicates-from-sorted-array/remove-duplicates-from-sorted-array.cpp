class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       map<int,int> newmap;

       for(int i=0;i<nums.size();i++){
         newmap[nums[i]]++;
       }

       int cnt=0;
    
        for(auto& i:newmap){
            nums[cnt]=i.first;
            cnt++;
        }

        return cnt;
    }
};