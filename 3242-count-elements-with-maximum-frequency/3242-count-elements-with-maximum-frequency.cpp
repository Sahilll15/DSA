class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;
        int maxFreq=0;
        int result=0;

        for(int i=0;i<nums.size();i++){

            freq[nums[i]]++;  

            if(freq[nums[i]]>maxFreq){
                maxFreq=freq[nums[i]];
                result=maxFreq;
            }else if(maxFreq == freq[nums[i]]){
                result+=maxFreq;
            }
        }

        return result;
    }
};