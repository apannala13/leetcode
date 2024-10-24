class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l = 0;
        int r = 0;

        string res = "";

        while(l < word1.length() && r < word2.length()){
            res += word1[l];
            res += word2[r];
            l++;
            r++;
        } 
        if(l < word1.length()){
            res += word1.substr(l); //similar to word1[l:]
        } else{
            res += word2.substr(r); //similar to word2[r:]
        }
        return res;
    }
};
