class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {

        int n = points.size();
        
       
        sort(points.begin(), points.end());


        int maxArea = 0;
        for(int i=1;i<n;i++) {
            int currArea = points[i][0]-points[i-1][0];
            maxArea = max(maxArea, currArea);
        }

        return maxArea;
        
    }
};