class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> basket;
        
        int i=0;
        int maxFruits=0;

        for(int j=0;j<fruits.size();j++){
            basket[fruits[j]]++;

            while(basket.size()>2){
                basket[fruits[i]]--;
                if(basket[fruits[i]]==0){
                    basket.erase(fruits[i]);
                }
                i++;
            }

            maxFruits=max(maxFruits,j-i+1);
        }


        return maxFruits;
    }   
};