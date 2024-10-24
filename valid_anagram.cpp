class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<int, int> hashS;
        unordered_map<int, int> hashT;
        for(int i = 0; i < s.length(); ++i){
            hashS[s[i]]++;
            hashT[t[i]]++;
        }
        return hashS == hashT;
    }
};
