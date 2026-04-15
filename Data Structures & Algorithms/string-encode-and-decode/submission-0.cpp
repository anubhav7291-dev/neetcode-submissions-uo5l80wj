class Solution {
public:

    string encode(vector<string>& strs) {
        string pro;
        for(string s:strs){
            int size = s.size();
            pro += to_string(size) + "#" + s;
        }
        return pro;
    }

    vector<string> decode(string s) {
        vector<string> lol;
        for(int i=0;i<s.size();i++){
            int size=0;
            while(s[i]!='#'){
                size = size*10 + (s[i]-'0');
                i++;
            }
            i++;
            string temp;
            for(int j=0;j<size;j++){
                temp+= s[i];
                i++;
            }
            lol.push_back(temp);
            i--;
        }
        return lol;
    }
};
