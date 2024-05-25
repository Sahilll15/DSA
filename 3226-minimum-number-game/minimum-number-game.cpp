#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;

    
        sort(nums.begin(), nums.end());

        while (!nums.empty()) {
         
            int aliceMove = nums.front();
            nums.erase(nums.begin());

          
            int bobMove = nums.front();
            nums.erase(nums.begin());

 
            arr.push_back(bobMove);
            
           
            arr.push_back(aliceMove);
        }

        return arr;
    }
};
