class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int n=height.size()-1;
        int right=n;
        int area=0;
        while(left<right){
            int currentArea=min(height[left],height[right]) * (right-left);
            area=max(area,currentArea);

            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }

        }

        return area;
    }
};