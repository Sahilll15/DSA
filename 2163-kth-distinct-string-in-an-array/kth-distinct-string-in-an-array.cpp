#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mpp;


        for (const string& str : arr) {
            mpp[str]++;
        }

        int count = 0;
        for (const string& str : arr) {
            if (mpp[str] == 1) {
                count++;
                if (count == k) {
                    return str;
                }
            }
        }

        return "";
    }
};
