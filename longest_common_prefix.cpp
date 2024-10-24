class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        for(int i = 0; i < strs[0].length(); ++i){
            char c = strs[0][i];
            for(int s = 0; s < strs.size(); ++s){
                if(i >= strs[s].length() || strs[s][i] != c){
                    return res;
                }
            }
            res += c;
        }
        return res;
    }
};
