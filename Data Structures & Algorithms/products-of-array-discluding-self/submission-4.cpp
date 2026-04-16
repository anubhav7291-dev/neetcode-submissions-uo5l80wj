class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(), 1);

        int prefix = 1;
        for(int i = 0; i < nums.size(); i++){
            output[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for(int i = nums.size() - 1; i >= 0; i--){
            output[i] *= suffix;
            suffix *= nums[i];
        }

        return output;
    }
};


//for(int i=0;i<nums.size();i++){
        //     int key=1;
        //     for(int j=0;j<nums.size();j++){
        //         if(j==i) continue;
        //         key = nums[j]*key; 
        //     }
        //     output.push_back(key);
        // }
