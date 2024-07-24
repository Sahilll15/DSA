class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {


            unordered_map<int,int>mpp;

            for(int i=0;i<nums1.size();i++){
            mpp[nums1[i]]++;
            }

            int minValue=INT_MAX;


            for(int i=0;i<nums2.size();i++){
                if(mpp.find(nums2[i])!=mpp.end()){
                    minValue=min(minValue,nums2[i]);
                }
            }

        return minValue == INT_MAX ? -1 : minValue;
    }   
};