class Solution {
public:
    int nthUglyNumber(int n) {
         priority_queue<long, vector<long>, greater<long>> minHeap;
         unordered_set<long> seen;

         minHeap.push(1);
         seen.insert(1);

         long currentUgly = 1;

         for(int i=0;i<n;++i){
            currentUgly=minHeap.top();
            minHeap.pop();

            for (int factor : {2, 3, 5}) {
            long newUgly = currentUgly * factor;
            if (seen.find(newUgly) == seen.end()) {
                seen.insert(newUgly);
                minHeap.push(newUgly);
            }
        }
         }


         return currentUgly;
    }
};