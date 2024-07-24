class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int c=0;
        while (true){
            if(tickets[k]==0)   
                break;
            for(int i=0;i<tickets.size();i++){
                if(tickets[k]==0)
                    break;
                if(tickets[i]>0){
                    tickets[i]-=1;
                    c+=1;
                }
            }
        }
        return c;
    }
};