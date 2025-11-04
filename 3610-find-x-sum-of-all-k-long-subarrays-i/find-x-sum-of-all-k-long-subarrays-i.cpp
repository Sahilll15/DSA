class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        map<int,int> myMap;

        vector<int> ans;
        for(int i=0;i<k;i++){
            myMap[nums[i]]++;
        }

        auto getXsum= [&](map<int, int>& mp, int x) {   
            vector<pair<int,int>> arr(mp.begin(),mp.end());

            sort(arr.begin(),arr.end(),[](auto& a, auto& b) {
                if (a.second == b.second) return a.first > b.first;
                return a.second > b.second;
            });

            int sum=0;
            for(int i=0;i<arr.size() && i<x;i++){
                sum+= arr[i].first * arr[i].second;
            }

            return sum;
        };
        

        ans.push_back(getXsum(myMap, x));

        for(int j=k;j<nums.size();j++){
            int removal=nums[j-k];

            myMap[removal]--;
            if (myMap[removal] == 0) myMap.erase(removal);

            myMap[nums[j]]++;

            ans.push_back(getXsum(myMap,x));
            
        }

        return ans;
    }
};