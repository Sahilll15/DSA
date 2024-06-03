class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int subarray = 0;
        unordered_map<int, int> count;
        count[0] = 1; 
        int odd_sum = 0;
        
        for (int num : nums) {
            odd_sum += (num % 2); 
            
            if (odd_sum >= k) {
                subarray += count[odd_sum - k]; 
            }
            
            count[odd_sum]++; 
        }
        
        return subarray;
    }
};