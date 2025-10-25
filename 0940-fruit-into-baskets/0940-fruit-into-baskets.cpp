class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxFruits=0;


        list<int> l1;
        list<int> l2;
        int i=0;
        for(int j=0;j<fruits.size();j++){
            if(l1.empty() || l1.front()==fruits[j]){
                l1.push_back(fruits[j]);
            }else if (l2.empty() || l2.front()==fruits[j]){
                l2.push_back(fruits[j]);
            }else{
             while (!l1.empty() && !l2.empty()) {
                    if (fruits[i] == l1.front())
                        l1.pop_front();
                    else
                        l2.pop_front();
                    i++;
                }

               if (l1.empty())
                    l1.push_back(fruits[j]);
                else
                    l2.push_back(fruits[j]);
            }
            
           maxFruits = max(maxFruits, (int)(l1.size() + l2.size()));
        }

        return maxFruits;
    }
};