class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        set<int> check_set;
        for(int i=0;i<nums.size();i++){
            check_set.insert(nums[i]);
        }
        int output=1;
        for(auto it:check_set){
        if(!check_set.count(it-1)){
            int cnt =1;
            int x=it;
            while(check_set.count(x+1)){
                x++;
                cnt++;
            }
            output=max(output,cnt);
        }
        }
        return output;
    }
};
