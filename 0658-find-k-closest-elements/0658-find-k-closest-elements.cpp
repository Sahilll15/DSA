class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        std::priority_queue<pair<int,int>> maxHeap;

        for(int i=0;i<arr.size();i++){
            
            int diff=abs(arr[i]-x);

            maxHeap.push({
                diff,arr[i]
            });

            if(maxHeap.size()>k){
                maxHeap.pop();
            }
        }

        vector<int>ans;
        while(maxHeap.size()){
            pair<int,int> top=maxHeap.top();
            int value=top.second;
            maxHeap.pop();
            ans.push_back(value);
        }

         sort(ans.begin(),ans.end());
         return ans;
    }
};