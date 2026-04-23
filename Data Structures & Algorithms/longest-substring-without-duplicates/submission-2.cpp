class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;
        unordered_map<char,int> st;
        int i=0;
        int j=0;
        int max_length=0;
        int length=1;
        while(j<s.size()){
            if(st.count(s[j]) && st[s[j]]>=i){
                i=st[s[j]]+1;
            }
            st[s[j]]=j;
            length=j-i+1;
            max_length=max(max_length,length);
            j++;
        }
        return max_length;
    }
};
