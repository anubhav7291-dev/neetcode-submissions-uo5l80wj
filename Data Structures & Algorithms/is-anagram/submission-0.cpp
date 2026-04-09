class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> seen;
        unordered_map<char,int> seen2;
        for(int i=0;i<s.length();i++){
            seen[s[i]]++;
            seen2[t[i]]++;
        }
        return seen == seen2;
    }
};
