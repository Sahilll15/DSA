class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int total=0;
        int maxfruits=0;
        int left=0;
        unordered_map<int,int> fruitMap;
        for(int right=0;right<fruits.size();right++){
              fruitMap[fruits[right]]++;   
            while (fruitMap.size() > 2) {
                fruitMap[fruits[left]]--;
                if (fruitMap[fruits[left]] == 0) {
                    fruitMap.erase(fruits[left]);
                }
                left++;
            }

            maxfruits = max(maxfruits, right - left + 1);
        }

        return maxfruits;
    }
};