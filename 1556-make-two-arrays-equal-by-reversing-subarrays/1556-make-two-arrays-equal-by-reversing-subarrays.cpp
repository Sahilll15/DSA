#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if (target.size() != arr.size()) {
            return false;
        }

        unordered_map<int, int> mpp1;
        unordered_map<int, int> mpp2;

        for (int i = 0; i < target.size(); i++) {
            mpp1[target[i]]++;
            mpp2[arr[i]]++;
        }

        for (auto& [key, count] : mpp1) {
            if (mpp2[key] != count) {
                return false;
            }
        }

        return true;
    }
};
