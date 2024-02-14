class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
            int n=nums.size();
            if(n==0) return n;
            //set the longest to 1 as the longest element will atleast be 1 
            int longest=1;
            //declare a set
            unordered_set<int> st;


            //insert the elements into the set
            for(int i=0;i<n;i++){
                st.insert(nums[i]);
            }

        //itearete over the array
            for(auto it:st){
                //check if the previous elemnt of the current element it not 
                //present into the array

                if(st.find(it -1) == st.end()){
                    //it means its the first elemnt in the range

                    int cnt=1;
                    int x=it;

                //check if the next elemnt of the number is preset
                //consider 101 for 100
                //and loop until the element it not present
                    while(st.find(x+1) != st.end()){
                        //increse the count size
                        cnt++;

                        //move to the next element in the set
                        x=x+1;
                    }
                    //check if this sequence is the longest
                    longest=max(longest,cnt);
                }
            }
    return longest;
    }
};