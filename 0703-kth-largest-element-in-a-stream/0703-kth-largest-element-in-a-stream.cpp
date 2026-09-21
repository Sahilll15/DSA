class KthLargest {
public:
    int kth;
    priority_queue<int,vector<int>,greater<int>> pq;
    KthLargest(int k, vector<int>& nums) {
        kth=k;
        for(int i=0;i<nums.size();i++){
            if(pq.size()<k){
                pq.push(nums[i]);
            }else if(nums[i]>pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
        }
    }
    
    int add(int val) {
        if(pq.size()<kth){
            pq.push(val);
        }else if(val > pq.top()){
            pq.pop();
            pq.push(val);
        }

        return pq.top();
    }
};

