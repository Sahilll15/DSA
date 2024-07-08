#include <vector>
using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> ele;
        for (int i = 1; i <= n; i++) {
            ele.push_back(i); 
        }
        
        int currentIndex = 0; 
        
        
        while (ele.size() > 1) {
            currentIndex = (currentIndex + k - 1) % ele.size();
            ele.erase(ele.begin() + currentIndex); 
        }
        
        return ele[0];
    }
};
