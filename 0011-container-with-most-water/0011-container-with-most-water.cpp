class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=INT_MIN;

        int left=0;
        int right=height.size()-1;

        while(left<right){
            int Length=min(height[left],height[right]);
            int breadth=right-left;

            int area=Length*breadth;

            if(area>maxarea){
                maxarea=area;
            }else if(height[left]>height[right]){
                right--;
            }else{
                left++;
            }
        }
        return maxarea;
    }
};