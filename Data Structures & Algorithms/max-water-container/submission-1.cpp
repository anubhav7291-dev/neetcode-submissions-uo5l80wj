class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size()-1;
        int ans=0;
        while(i<j){
            int curr_wt = min(heights[i],heights[j])*(j-i);
            if(curr_wt>ans) ans=curr_wt;
            if(heights[i]>heights[j]){ 
                j--;
                continue;
                }
            if(heights[j]>=heights[i]) i++;
        }

        // int output = min(heights[a],heights[b])*(b-a);
        // return output;

        return ans;

    }
};
