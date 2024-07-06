#include <unordered_set>
#include <cstdlib> // for rand and srand
#include <ctime>   // for time

using namespace std;

class RandomizedSet {
private:
    unordered_set<int> st;

public:
    RandomizedSet() {
        srand(time(0)); 
    }
    
    bool insert(int val) {
        if (st.count(val) > 0) { 
            return false;
        }
        st.insert(val);
        return true;
    }
    
    bool remove(int val) {
        if (st.count(val) > 0) { // Check if val exists in the set
            st.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int size = st.size();
        int randomIndex = rand() % size; 
        
        auto it = st.begin();
        advance(it, randomIndex);
        
        return *it;}
        
};

