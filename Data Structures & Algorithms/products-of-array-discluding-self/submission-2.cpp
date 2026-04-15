class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        for(int i=0;i<nums.size();i++){
            int key=1;
            for(int j=0;j<nums.size();j++){
                if(j==i) continue;
                key = nums[j]*key; 
            }
            output.push_back(key);
        }
        return output;
    }
};
