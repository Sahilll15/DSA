class Solution {
public:
    int countStudents(std::vector<int>& students, std::vector<int>& sandwiches) {
        int n = students.size();
        std::queue<int> st;
        for (int i : students) {
            st.push(i);
        }
        int count = 0, j = 0;
        while (!st.empty()) {
            int ref = st.front();
            st.pop();
            if (ref == sandwiches[j]) {
                j++;
                count = 0;
            } else {
                st.push(ref);
                count++;
            }
            if (count == n)
                return n - j;
        }
        return 0;
    }
};