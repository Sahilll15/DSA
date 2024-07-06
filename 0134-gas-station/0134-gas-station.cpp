class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas=0;
        int startingstation=0;
        int currentGas=0;
        int n=gas.size();

        for(int i=0;i<n;i++){
            totalGas +=gas[i]-cost[i];
            currentGas+=gas[i]-cost[i];

            if(currentGas<0){
                startingstation=i+1;
                currentGas=0;
            }
        }

       return (totalGas >= 0) ? startingstation : -1;
    }
};