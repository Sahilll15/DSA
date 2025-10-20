class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int start=0;
        int end=height.size()-1;

        while(start<=end){
            int heightval=min(height[start],height[end]);
            int width=end-start;
            int area=heightval * width;

            maxArea=max(area,maxArea);

            if(height[start]>height[end]){
                end--;
            }else{
                start++;
            }
        }

        return maxArea;
    }
};