class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int output=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int diff = prices[j]-prices[i];
                if(diff>output){
                    output=diff;
                }
            }
        }
        return output;
    }
};
