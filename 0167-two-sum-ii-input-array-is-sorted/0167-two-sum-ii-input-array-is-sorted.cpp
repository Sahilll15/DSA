class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int i=0;
        int j=numbers.size()-1;

        vector<int>ans;
        while(i<=j){
            int temp=numbers[i]+numbers[j];

            if(temp == target){
                    ans.push_back(i+1);
                      ans.push_back(j+1);
                      return ans;
            }else if(temp > target){
                j--;
            }else{
                i++;
            }
        }

        return {-1,-1};
    }
};