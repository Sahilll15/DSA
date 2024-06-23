class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        std::priority_queue<int,std::vector<int>,std::greater<int>>minHeap;

        for(int i=0;i<nums.size();i++){

            minHeap.push(nums[i]);

            if(minHeap.size() > k){
                minHeap.pop();
            }
        }

        return minHeap.top();

    }
};