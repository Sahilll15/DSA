class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> mpp;
        set<int>ans;

        for(int num:nums1){
            mpp[num]++;
        }

        for(int num:nums2){
            if(mpp.find(num)!=mpp.end()){
                ans.insert(num);

            }
        }

       vector<int>values;

       for(auto it:ans){
        values.push_back(it);
       }

       return values;
    }
};