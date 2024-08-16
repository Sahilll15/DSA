class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int minElement = arrays[0][0]; 
        int maxElement = arrays[0].back();
        int maxDistance = 0; 

        for (int i = 1; i < arrays.size(); ++i) {
            maxDistance = max(maxDistance, max(abs(arrays[i].back() - minElement), abs(maxElement - arrays[i][0])));
            
            minElement = min(minElement, arrays[i][0]);
            maxElement = max(maxElement, arrays[i].back());
        }

        return maxDistance;
    }
};
